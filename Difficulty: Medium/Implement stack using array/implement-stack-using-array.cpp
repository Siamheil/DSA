class myStack {
  public:
    int *arr;
    int top;
    int size;
    myStack(int n) {
        // Define Data Structures
        size=n;
        arr=new int[n];
        top=-1;
    }

    bool isEmpty() {
        // check if the stack is empty
        return top==-1;
    }

    bool isFull() {
        // check if the stack is full
        return top==size-1;
    }

    void push(int x) {
        // inserts x at the top of the stack
        if(!isFull()){
            top++;
            arr[top]=x;
        }
    }

    void pop() {
        // removes an element from the top of the stack
        if(!isEmpty()){
            top--;
        }
    }

    int peek() {
        // Returns the top element of the stack
        if(!isEmpty()){
            return arr[top];
        }
        return -1;
    }
};