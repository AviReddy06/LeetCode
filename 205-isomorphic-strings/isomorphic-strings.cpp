class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mapping;
        unordered_map<char,char> rmapping;
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            if(mapping.count(s[i])){
                if(mapping[s[i]]!=t[i]){
                    return false;
                }
            }
            mapping[s[i]] = t[i];
        }
        for(int i=0;i<s.size();i++){
            if(rmapping.count(t[i])){
                if(rmapping[t[i]]!=s[i]){
                    return false;
                }
            }
            rmapping[t[i]] = s[i];
        }
        return true;
//this is a comment
    }
};