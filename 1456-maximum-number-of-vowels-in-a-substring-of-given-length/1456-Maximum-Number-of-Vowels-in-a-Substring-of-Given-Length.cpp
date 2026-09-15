class Solution {
public:
    bool isvowel(char c){
        return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    }
    int maxVowels(string s, int k) {
        int count = 0,max_count = 0;
        for(int i = 0;i<k;i++){
            if(isvowel(s[i])==true){
                count++;
            }
        }
        max_count = count;
        for(int i = k;i<s.size();i++){
            if(isvowel(s[i])==true) count++;
            if(isvowel(s[i-k])==true) count--;

            max_count = std::max(max_count,count);
        }

        return max_count;
    }
};