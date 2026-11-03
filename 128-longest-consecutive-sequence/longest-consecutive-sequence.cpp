class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int i:nums){
            st.insert(i);
        }
        int i=0;
        int res = 0;
        
        for(int n:st){
            int count = 1;
            int start = n;
            if(st.count(n-1)==0){
                while(st.count(start+1)){
                    count++;
                    start++;
                }
            }
            

            res = max(count,res);
        }
        return res;

    }
};