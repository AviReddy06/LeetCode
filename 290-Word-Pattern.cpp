class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);
        string word;

        while (ss >> word) {
            words.push_back(word);
        }

        if (words.size() != pattern.size()) {
            return false;
        }
        unordered_map<char,string> map;
        unordered_map<string,char> rmap;
        for(int i=0;i<words.size();i++){
            if(map.count(pattern[i])){
                if(map[pattern[i]]!=words[i]){
                    return false;
                }
                
            }
            map[pattern[i]]=words[i];
            if(rmap.count(words[i])){
                if(rmap[words[i]]!=pattern[i]){
                    return false;
                }
                
            }
            rmap[words[i]]=pattern[i];
            
        }
        return true;
    }
};