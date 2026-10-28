class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> freq;
        for(char c:magazine){
            freq[c]++;
        }
        for(char c:ransomNote){
            freq[c]--;
        }
        for(char C:ransomNote){
            if(freq[C]<0){
                return false;
            }
        }
        return true;
    }
};