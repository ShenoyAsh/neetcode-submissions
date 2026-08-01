class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        pair<int,int>ans;
        while(left<=right){
            int sum=nums[left]+nums[right];
            if(target>sum) left++;
            else if(target<sum) right--;
       else return {left+1,right+1};
    }return {-1,-1};
    }
};
