class Solution {
public:
    //i is row,j is col
    bool check_rows(vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            map<char,int>mpp; //for each row
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                else if(mpp[board[i][j]]>0) return false;
                else mpp[board[i][j]]++;
        }
    } return true;
    }
bool check_cols(vector<vector<char>>& board){
        for(int j=0;j<9;j++){
            map<char,int>mpp; //for each col
            for(int i=0;i<9;i++){
                if(board[i][j]=='.') continue;
                else if(mpp[board[i][j]]>0) return false;
                else mpp[board[i][j]]++;
        }
    } return true;
    }

bool check_3x3(vector<vector<char>>& board){
    for(int i=0;i<9;i+=3){
        for(int j=0;j<9;j+=3){ 
            map<char,int>mpp;
            for(int r=i;r<i+3;r++){
                for(int c=j;c<j+3;c++){
                        if(board[r][c]=='.') continue;
                else if(mpp[board[r][c]]>0) return false;
                else mpp[board[r][c]]++;
                }
            }   
        }
    } return true;
}


    bool isValidSudoku(vector<vector<char>>& board) {
        if(!check_rows(board))
    return false;

if(!check_cols(board))
    return false;

if(!check_3x3(board))
    return false;

return true;
    }
};
