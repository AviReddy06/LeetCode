class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int l = start-1,r = start,minimum = nums.size(),res = 0;
        while(l>=0){
            if(nums[l]==target){
                res = abs(l-start);
                minimum = min(res,minimum);
                break;
            }
            l--;
        }
        while(r<nums.size()){
            if(nums[r]==target){
                res = abs(r-start);
                minimum = min(res,minimum);
                break;
            }
            r++;
        }
        return minimum;
    }
};