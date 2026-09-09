class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int i = 0,count = 0;
        while(i<jewels.size()){
            for(int j = 0;j<stones.size();j++){
                if(jewels[i]==stones[j]){
                    count++;
                }
            }
            i++;
        }
        return count;
    }
};