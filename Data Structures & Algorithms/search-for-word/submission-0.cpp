class Solution {
public:
    vector<vector<char>> board;
    string word;
    int rows, cols;

    bool buildWord(int i, int j, int idx) {

        // 1. Out of bounds
        if (i < 0 || j < 0 || i >= rows || j >= cols)
            return false;

        // 2. Character doesn't match
        if (board[i][j] != word[idx])
            return false;

        // 3. Entire word matched
        if (idx == word.length() - 1)
            return true;

        // 4. Mark current cell as visited
        char temp = board[i][j];
        board[i][j] = '#';

        // 5. Explore all four directions
        bool found =
            buildWord(i + 1, j, idx + 1) ||   // Down
            buildWord(i - 1, j, idx + 1) ||   // Up
            buildWord(i, j + 1, idx + 1) ||   // Right
            buildWord(i, j - 1, idx + 1);     // Left

        // 6. Restore original character (Backtracking)
        board[i][j] = temp;

        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {

        this->board = board;
        this->word = word;

        rows = board.size();
        cols = board[0].size();

        // Try every cell as a starting point
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {

                if (this->board[i][j] == word[0]) {
                    if (buildWord(i, j, 0))
                        return true;
                }

            }
        }

        return false;
    }
};