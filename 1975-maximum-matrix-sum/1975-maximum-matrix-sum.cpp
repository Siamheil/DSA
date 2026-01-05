class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        long long sum=0;
        int negele=0;
        int minabsvalue=INT_MAX;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                sum=sum+abs(matrix[i][j]);
                if(matrix[i][j]<0) negele++;
                minabsvalue=min(minabsvalue,abs(matrix[i][j]));
            }
        }
        if(negele%2==0) return sum;
        return sum-(2*minabsvalue);
    }
};