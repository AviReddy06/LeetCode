class Solution {
public:
    string reverseVowels(string s) {
        int i = 0,j = s.size()-1;
        while(i<j){
            while(i<j&&(tolower(s[i])!='a'&&tolower(s[i])!='e'&&tolower(s[i])!='i'&&tolower(s[i])!='o'&&tolower(s[i])!='u')){
                i++;
            }
            while(i<j&&(tolower(s[j])!='a'&&tolower(s[j])!='e'&&tolower(s[j])!='i'&&tolower(s[j])!='o'&&tolower(s[j])!='u')){
                j--;
            }
            std::swap(s[i],s[j]);
            i++;j--;
        }
        return s;
    }
};