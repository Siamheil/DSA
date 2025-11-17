class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        int n=prices.size();
        sort(prices.begin(),prices.end());
        int i=0,j=n-1;
        int mincost=0,maxcost=0;
        while(i<=j){
            mincost+=prices[i];
            i++;
            j=j-k;
        }
        i=n-1,j=0;
        while(j<=i){
            maxcost+=prices[i];
            i--;
            j=j+k;
        }
        return {mincost,maxcost};
    }
};