class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> res;
        for(int i:nums){
            res.insert(i);
        }
        return nums.size()!=res.size();
    }
};