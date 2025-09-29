class SpecialStack {
  public:
    stack<int>st1;
    stack<int>st2;
    SpecialStack() {
        // Define Stack
    }

    void push(int x) {
        // Add an element to the top of Stack
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
        // Remove the top element from the Stack
        if(!st1.empty()){
            st1.pop();
            st2.pop();
        }
    }

    int peek() {
        // Returns top element of the Stack
        if(st1.empty()) return -1;
        return st1.top();
    }

    bool isEmpty() {
        // Check if stack is empty
        return st1.empty();
    }

    int getMin() {
        // Finds minimum element of Stack
        if(st2.empty()){
            return -1;
        }
        return st2.top();
    }
};