class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int j = 0,i = 0,count = popped.size();
        while(j<pushed.size()){
            if(!st.empty()&&st.top()==popped[j]){
                st.pop();
                j++;
                count--;

            }else{
                if(i<pushed.size()){
                st.push(pushed[i]);
                i++;
                }else{
                    return false;
                }
                
            }
        }
        if(count){
            return false;
        }
        return true;

    }
};