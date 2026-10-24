class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int i:nums){
            freq[i]++;
        }
        vector<pair<int,int>> res;
        for(auto p:freq){
            res.push_back({p.first,p.second});
        }
        sort(res.begin(),res.end(),
            [](pair <int,int> a,pair<int,int> b){
                return a.second>b.second;
            }
        );
        vector<int> result;
        for(int i=0;i<k;i++){
            result.push_back(res[i].first);
        }
        return result;
    }
};