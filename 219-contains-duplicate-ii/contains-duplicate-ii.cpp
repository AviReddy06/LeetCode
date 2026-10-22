class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int res;
        for(int i=0;i<nums.size();i++){
            if(freq.count(nums[i])){
                res = abs(i-freq[nums[i]]);
                if(res<=k){
                    return true;
                }
            }
            freq[nums[i]] = i;
        }
        return false;
    }
};