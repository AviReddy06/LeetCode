class Solution {
public:
    bool checkDivisibility(int n) {
        int s = 0,p = 1,y = n;
        while(n>0){
            s=s+n%10;
            p=p*(n%10);
            n = n/10;
        }
        if(y%(s+p)==0){
            return true;
        }else{
            return false;
        };
    }
};