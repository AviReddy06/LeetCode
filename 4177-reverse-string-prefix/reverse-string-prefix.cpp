class Solution {
public:
    string reversePrefix(string s, int k) {
        string out;
        for(int i = k-1;i>=0;i--){
            out+=s[i];
        }
        for(int i = k;i<s.size();i++){
            out+=s[i];
        }
        return out;
    }
    
};