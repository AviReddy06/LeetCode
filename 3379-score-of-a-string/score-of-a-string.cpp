class Solution {
public:
    int scoreOfString(string s) {
        int ans = 0;
        for(int i=1;i<s.size();i++){
            ans+=std::abs(s[i]-s[i-1]);
        }
        return ans;
    }
};