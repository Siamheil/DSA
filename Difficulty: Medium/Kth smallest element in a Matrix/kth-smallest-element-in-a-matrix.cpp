class Solution {
  public:
    int kthSmallest(vector<vector<int>> &mat, int k) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        vector<int>arr;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr.push_back(mat[i][j]);
            }
        }
        sort(arr.begin(),arr.end());
        return arr[k-1];
    }
};
