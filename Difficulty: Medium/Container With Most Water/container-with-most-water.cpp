class Solution {

  public:
    int maxWater(vector<int> &arr) {
        // code here
        int maxwater=0;
        int lp=0;
        int rp=arr.size()-1;
        while(lp<rp){
            int w=rp-lp;
            int h=min(arr[lp],arr[rp]);
            int currwater=w*h;
            maxwater=max(currwater,maxwater);
            arr[lp]<arr[rp]?lp++:rp--;
        }
        return maxwater;
    }
};