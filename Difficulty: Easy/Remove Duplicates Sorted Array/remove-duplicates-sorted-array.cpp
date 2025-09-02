class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int n=arr.size();
        if(n == 0) return {};
        int i=0;
        int j=1;
        while(j<n){
            if(arr[i]!=arr[j]){
                i++;
                arr[i]=arr[j];
            }
            j++;
        }
        arr.resize(i + 1);
        return arr;
    }
};