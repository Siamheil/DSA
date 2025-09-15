class Solution {
  public:
    vector<int> remDuplicate(vector<int>& arr) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        if(n==0) return {};
        int start=0,end=1;
        while(end<n){
            if(arr[start]!=arr[end]){
                start++;
                arr[start]=arr[end];
            }
            end++;
        }
        arr.resize(start + 1);  
        return arr;
    }
};