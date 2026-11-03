class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int sum = 0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int n:nums){
            sum+=n;
            count+=mp[sum-k];
            mp[sum]++;
        }
        return count;
    }
};