class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mpp;

        // Count frequency
        for(int i = 0; i < nums.size(); i++)
            mpp[nums[i]]++;

        vector<int> ans;

        while(k--) {

            int maxFreq = 0;
            int number = 0;

            // Find current maximum frequency
            for(auto it : mpp) {

                if(it.second > maxFreq) {
                    maxFreq = it.second;
                    number = it.first;
                }
            }

            ans.push_back(number);

            // Remove it so next iteration finds the next largest
            mpp.erase(number);
        }

        return ans;
    }
};