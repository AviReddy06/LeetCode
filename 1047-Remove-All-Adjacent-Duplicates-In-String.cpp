class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(int i=s.size()-1;i>=0;i--){
            if(!st.empty()&&st.top()!=s[i]){
                st.push(s[i]);
            }else if(st.empty()){
                st.push(s[i]);
            }else{
                st.pop();
            }
        }
        string res;
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        return res;
    }
};