class Solution {
public:
vector<vector<int>>ans;
vector<int>nums;
void generate(int index,vector<int>subset){
    if(index==nums.size()){
        ans.push_back(subset);
        return;
    }
        subset.push_back(nums[index]);   // Take
generate(index + 1, subset);

subset.pop_back();               // Undo

generate(index + 1, subset);     // Skip
}
    vector<vector<int>> subsets(vector<int>& nums) {
        this->nums=nums;
        generate(0,{});
        return ans;
    }
};
