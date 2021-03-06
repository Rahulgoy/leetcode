class MyStack {
public:
    queue<int> q1;
    // queue<int> q2;
    MyStack() {
        
    }
    
    void push(int x) {
        // q1.push(x);
        
        
        int n = q1.size();
        q1.push(x);
        
            for(int i=0;i<n;i++){
                q1.push(q1.front());
                q1.pop();
                
            }
        
    }
    
    int pop() {
        // int temp=0;
        // while(!q1.empty()){
        //     temp = q1.front();
        //     q1.pop();
        //     if(q1.empty()) continue;
        //     else q2.push(temp);
        // }
        // while(!q2.empty()){
        //     q1.push(q2.front());
        //     q2.pop();
        // }
        // return temp;
        
        
        int temp;
        if(!q1.empty()){
            temp=q1.front();
            q1.pop();
        }
        return temp;
    }
    
    int top() {
        // int temp=0;
        // while(!q1.empty()){
        //     temp = q1.front();
        //     q1.pop();
        //     q2.push(temp);
        // }
        // while(!q2.empty()){
        //     q1.push(q2.front());
        //     q2.pop();
        // }
        // return temp;
        
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
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