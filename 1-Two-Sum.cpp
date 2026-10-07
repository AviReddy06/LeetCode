class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> freq;
        int required = 0;
        for(int i =0;i<nums.size();i++){
            required = target-nums[i];
            if(freq.count(required)){
                return {freq[required],i};
            }
            freq[nums[i]] = i;
        }
        return {-1,-1};
    }
};