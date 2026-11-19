class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;
        st.push("MAIN");
        for(string i:logs){
            if(i=="../"){
                if(st.top()!="MAIN"){
                    st.pop();
                }
                continue;
            }else if(i=="./"){
                continue;
            }else{
                st.push(i);
            }
        }
        return st.size()-1;
    }
};