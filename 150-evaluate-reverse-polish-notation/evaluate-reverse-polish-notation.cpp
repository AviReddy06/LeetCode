class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int res = 0;
        if (tokens.size()<=1){
            return stoi(tokens[0]);
        }
        for(string c:tokens){
            if(c=="+"||c=="-"||c=="*"||c=="/"){
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                if(c=="+"){
                    res = a+b;
                    st.push(res);
                }else if(c=="-"){
                    res = a-b;
                    st.push(res);
                }else if(c=="*"){
                    res = a*b;
                    st.push(res);
                }else if(c=="/"){
                    res = a/b;
                    st.push(res);
                }else{
                    cout<<"Invalid Operator";
                }
            }else{
                int num = stoi(c);
                st.push(num);
            }
        }
        return res;
    }
};