// User function template for C++

class Solution {
  public:
    bool isProduct(vector<int> arr, long long x) {
        // code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int start=0,end=n-1;
        while(start<end){
            long long prod = 1LL * arr[start] * arr[end];
            if(prod==x){
                return true;
            }
            else if(prod<x){
                start++;
            }else{
                end--;
            }
        }
        return false;
    }
};