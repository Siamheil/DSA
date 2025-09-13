// User function template for C++
class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
        int m=mat.size();
        int n=mat[0].size();
        int start=0,end=n-1;
        while(start<m && end>=0){
            if(mat[start][end]==x) return true;
            else if(mat[start][end]<x) start++;
            else end--;
        }
        return false;
    }
};