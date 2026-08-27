class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min  = INT_MAX;
        int max = 0;
        for(int price:prices){
            min = std::min(min,price);
            max = std::max(max,price-min);
        };
        return max;
    }
};