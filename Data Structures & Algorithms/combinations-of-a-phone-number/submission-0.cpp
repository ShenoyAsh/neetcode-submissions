class Solution {
public:
 map<char, string> mpp = {
    {'2', "abc"},
    {'3', "def"},
    {'4', "ghi"},
    {'5', "jkl"},
    {'6', "mno"},
    {'7', "pqrs"},
    {'8', "tuv"},
    {'9', "wxyz"}
};
    vector<string> ans;
    string digits;
    void combine(int index,string current){
        if(index==digits.length()){
            ans.push_back(current);
            return;
        }
        string letters=mpp[digits[index]];
        for(char c:letters){
            current.push_back(c); //Choose
            combine(index+1,current); //Explore
            current.pop_back(); //BackTrack
        }
        
    }

    vector<string> letterCombinations(string digits) { 
    if(digits.empty())
    return {};
        this->digits=digits;
        combine(0,"");
        return ans;
    }
};
