class twoStacks {
  public:
    int *arr;
    int top1,top2;
    int size;
    twoStacks(int n=1000) {
        arr=new int[n];
        size=n;
        top1=-1;
        top2=n;
    }

    // Function to push an integer into the stack1.
    void push1(int x) {
        // code here
        if(top1+1==top2) return;
        top1++;
        arr[top1]=x;
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        if(top2-1==top1) return;
        // code here
        top2--;
        arr[top2]=x;
    }

    // Function to remove an element from top of the stack1.
        
    int pop1() {
        // code here
        if(top1==-1) return -1;
        int ele=arr[top1];
        top1--;
        return ele;
    }

        
    // Function to remove an element from top of the stack2.
    int pop2() {
        // code here
        if(top2==size) return -1;
        int ele=arr[top2];
        top2++;
        return ele;
    }
};