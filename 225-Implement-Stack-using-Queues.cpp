class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        int size = q1.size();
        for(int i = 0;i<size-1;i++){
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        q1.pop();
        size = q2.size();
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return ans;
        
    }
    
    int top() {
        int size = q1.size();
        for(int i=0;i<size-1;i++){
            q2.push(q1.front());
            q1.pop();
        };
        int ans = q1.front();
        q1.pop();
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        q1.push(ans);
        return ans;
    }
    
    bool empty() {
        if(q1.empty()){
            return true;
        }
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */