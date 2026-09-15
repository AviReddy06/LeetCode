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
        int l = 0,r = k;
        while(r<s.size()){
            if(isvowel(s[l])==true&&isvowel(s[r])==true){
                max_count = std::max(max_count,count);
                // continue;
            }else if(isvowel(s[l])==false&&isvowel(s[r])==true){
                count++;
                max_count = std::max(max_count,count);
            }else if(isvowel(s[l])==true&&isvowel(s[r])==false){
                count--;
                max_count = std::max(max_count,count);
            }else if(isvowel(s[l])==false&&isvowel(s[r])==false){
                // count--;
                max_count = std::max(max_count,count);
            }
            l++;
            r++;
        }

        return max_count;
    }
};