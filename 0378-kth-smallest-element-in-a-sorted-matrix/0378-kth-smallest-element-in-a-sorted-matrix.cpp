class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        priority_queue<int>p;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                p.push(mat[i][j]);
                if(p.size()>k){
                    p.pop();
                }
            }
        }
        return p.top();
    }
};