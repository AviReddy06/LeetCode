class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> seen;
        unordered_set<int> res;
        vector<int> result;
        for(int i:nums1){
            seen.insert(i);
        }
        for(int i:nums2){
            if(seen.count(i)){
                res.insert(i);
            }
        }
        for(int i:res){
            result.push_back(i);
        }
        return result;
    }
};