class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=0,j=0;
        while(i<b.size() && j<a.size()){
            if(b[i]==a[j]){
                i++;
            }
            j++;
        }
        return i==b.size();
    }
};