class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        map<char,int>mpp;
        for(char c:t){
            mpp[c]++;
        }
        for(char c:s){
            mpp[c]--;
        }
        for(char c:t){
            if(mpp[c]>=1) return false;
        }return true;
    }
};
