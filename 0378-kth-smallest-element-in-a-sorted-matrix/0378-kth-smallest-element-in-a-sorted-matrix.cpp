class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int start=matrix[0][0];
        int end=matrix[n-1][n-1];
        while(start<end){
            int mid=start+(end-start)/2;
            int count=0;
            int j=n-1;
            for(int i=0;i<n;i++){
                while(j>=0 && matrix[i][j]>mid) j--;
                count+=(j+1);
            }
                if(count<k) start=mid+1;
                else end=mid;
            }
            return start;
    }
};