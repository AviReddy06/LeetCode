class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0,l = 0,r = 1,min = 9999;
        while(r<prices.size()&&r-prices.size()!=0){
            if(prices[r]-prices[l]<0){
                if(prices[l]<min){
                    min = prices[l];
                }
                l = r;
                r++;
            }else{
                if(max<prices[r]-prices[l]){
                    if(prices[l]<min){
                        min = prices[l];
                    }
                    max = prices[r]-min;
                    r++;
                }else{
                    if(prices[l]<min){
                        min = prices[l];
                    }
                    r++;
                }
            }

        }
        return max;
    }
};