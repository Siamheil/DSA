// User function template for C++
class Solution {
  public:

    int maxProduct(vector<int>& arr) {
        // code here
        int n=arr.size();
        int largest=0;
        int sec_largest=0;
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                sec_largest=largest;
                largest=arr[i];
            }else{
                sec_largest=max(sec_largest,arr[i]);
            }
        }
        return largest*sec_largest ;
    }
};