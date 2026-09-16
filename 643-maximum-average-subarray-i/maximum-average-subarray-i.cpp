class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int cs = 0,maxs;
        for(int i = 0;i<k;i++){
            cs+=nums[i];
        }
        maxs = cs;

        for(int i = k;i<nums.size();i++){
            cs += nums[i]-nums[i-k];
            maxs = std::max(maxs,cs);
        }

        return (double)maxs/k;

    }
};