class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(string s:operations){
            if(s=="D"){
                
                st.push(2*st.top());
            }else if(s=="C"){
                st.pop();
            }else if(s=="+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.push(a);
                st.push(a+b);
            }else{
                st.push(stoi(s));
            }
        }
        int res = 0;
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        return res;
    }
};