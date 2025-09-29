class MinStack {
public:
    stack<int>st1;
    stack<int>st2;
    MinStack() {
        
    }
    
    void push(int x) {
        if(st1.empty()){
            st1.push(x);
            st2.push(x);
        }
        else{
            st1.push(x);
            st2.push(min(x,st2.top()));
        }
    }
    
    void pop() {
        if(!st1.empty()){
            st1.pop();
            st2.pop();
        }
    }
    
    int top() {
        if(st1.empty()) return -1;
        return st1.top();
    }
    
    int getMin() {
        if(st2.empty()) return -1;
        return st2.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */