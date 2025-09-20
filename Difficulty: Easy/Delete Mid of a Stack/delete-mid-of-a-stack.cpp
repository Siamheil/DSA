class Solution {
  public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        // code here..
        int n=s.size();
        int mid = n/2 +1;
        stack<int>temp;
        for(int i=1;i<mid;i++){
            temp.push(s.top());
            s.pop();
        }
        if(!s.empty()) s.pop();
        while(!temp.empty()){
            s.push(temp.top());
            temp.pop();
        }
    }
};