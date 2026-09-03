class Solution {
public:
    int search(vector<int>& nums, int target) {
        // int l = -1;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
                // count++;
                break;
            }
        }
        return -1;
        
    }
};