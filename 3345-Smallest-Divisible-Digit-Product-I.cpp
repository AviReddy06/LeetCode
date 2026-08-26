class Solution {
public:
    int product(int n){
        int p = 1;
        while(n>0){
            p*=n%10;
            n = n/10;
        }
        return p;
    }
    int smallestNumber(int n, int t) {
        int res = product(n),q =1,s = n;
        while(q!=0){
            if(res%t == 0){
                q*=0;
                return s;
            }else{
                s = s+1;
                res = product(s);
            }
        }
        return s;
    }
};