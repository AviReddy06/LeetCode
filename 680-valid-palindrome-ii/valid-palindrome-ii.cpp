class Solution {
public:
    bool check(string& s,int l,int r){
        while(l<r){
            if(s[l]!=s[r]){
                return false;
            }
            l++;r--;
            
        }
        return true;
    }
    bool validPalindrome(string& s) {
        int i = 0,j = s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return(check(s,i+1,j)||check(s,i,j-1));
                    

            }
            i++;j--;
        }
        return true;
    }
};