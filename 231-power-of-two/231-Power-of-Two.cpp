class Solution {
public:
    bool isPowerOfTwo(long long int n) {
        long long int i = 0,ans = false;
        while(i<31 && i<n){
            if(1<<i==n){
                ans = true;
                return true;
            }else{
                i++;
            }
        }
        return false;
    }
};