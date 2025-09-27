class myStack {
    queue<int> q1;
    queue<int>q2;

  public:

    void push(int x) {
        // Inserts an element x at the top of the stack
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
    }

    void pop() {
        // Removes an element from the top of the stack
        if(!q1.empty()){
        q1.pop();
        }
    }

    int top() {
        // Returns the top element of the stack
        if(q1.empty() && q2.empty()){
            return -1;
        }
        return q1.front();
        // If stack is empty, return -1
    }

    int size() {
        // Returns the current size of the stack
        return q1.size();
    }
};
