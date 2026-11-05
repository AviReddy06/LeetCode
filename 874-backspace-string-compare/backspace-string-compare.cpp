class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;
        for(char c:s){
            if(c=='#'&&!st1.empty()){
                st1.pop();
            }else if(c=='#'){
                continue;
            }else{
                st1.push(c);
            }
        }
        for(char c:t){
            if(c=='#'&&!st2.empty()){
                st2.pop();
            }else if(c=='#'){
                continue;
            }else{
                st2.push(c);
            }
        }
        string res1,res2;
        while(!st1.empty()){
            res1+=st1.top();
            st1.pop();
        }
        while(!st2.empty()){
            res2+=st2.top();
            st2.pop();
        }
        if(res1==res2){
            return true;
        }
        return false;
    }
};