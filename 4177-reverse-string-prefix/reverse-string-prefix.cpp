class Solution {
public:
    string reversePrefix(string s, int k) {
        // string out;
        int n = k-1,i = 0;
        while(i<=n){
            swap(s[n],s[i]);
            i++;
            n--;
        }
        return s;
    }
    
};