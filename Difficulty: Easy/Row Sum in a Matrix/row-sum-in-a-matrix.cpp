class Solution {
  public:
    vector<int> rowSum(vector<vector<int>>& mat) {
        // Code here
        int row=mat.size();
        int col=mat[0].size();
        vector<int>ans;
        for(int i=0;i<row;i++){
            int sum=0;
            for(int j=0;j<col;j++){
                sum+=mat[i][j];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
