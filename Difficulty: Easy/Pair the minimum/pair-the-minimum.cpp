

class Solution {
  public:
    int Pair_minimum(vector<int>& arr) {
        // Complete the function
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int i=0;
        int j=n-1;
        int result=0;
        while(i<j){
            int sum=arr[i]+arr[j];
            result=max(sum,result);
            i++;
            j--;
            
        }
        return result;
    }
};