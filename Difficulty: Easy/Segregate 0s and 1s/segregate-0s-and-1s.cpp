// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
       int n=arr.size();
       int count0 = 0;
       int count1 = 0;
       for(int i=0;i<n;i++){
           if(arr[i]==0){
               count0++;
           }else{
               count1++;
           }
       }
       for(int i=0;i<count0;i++){
           arr[i]=0;
       }
       for(int i=count0;i<n;i++){
           arr[i]=1;
       }
       
    }
};