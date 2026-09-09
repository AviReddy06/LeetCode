class Solution {
public:
    string reversePrefix(string word, char ch) {
        int idx = 0;
        bool found = false;
        string out;
        for(int i = 0;i<word.size();i++){
            if(word[i]==ch){
                idx = i;
                found = true;
                break;
            }
        }
        if(found){
            for(int i = idx;i>=0;i--){
            out+=word[i];
            }
            for(int i = idx+1;i<word.size();i++){
                out+=word[i];
            }
            return out;
        }else{
            return word;
        }

        
    }
};