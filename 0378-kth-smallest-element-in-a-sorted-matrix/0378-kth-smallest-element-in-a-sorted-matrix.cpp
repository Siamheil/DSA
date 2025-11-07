class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>arr;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr.push_back(matrix[i][j]);
            }
        }
        sort(arr.begin(),arr.end());
        return arr[k-1];
    }
};