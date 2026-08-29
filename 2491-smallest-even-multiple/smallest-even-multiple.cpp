class Solution {
public:
    int smallestEvenMultiple(int n) {
        int res = 0;
        if(n%2==0){
            return n;
        }else{
            res = n*2;
            return res;
        }
    }
};