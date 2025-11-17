class Solution {
  public:
    long long solve(vector<int>& bt) {
        sort(bt.begin(),bt.end());
        int t=0,wtime=0;
        for(int i=0;i<bt.size();i++){
            wtime+=t;
            t+=bt[i];
        }
        return (wtime/bt.size());
    }
};