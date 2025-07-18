class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0;
        int lp=0;
        int rp=height.size()-1;
        while(lp<rp){
            int w=rp-lp;
            int h=min(height[lp],height[rp]);
            int currwater=w*h;
            maxwater=max(currwater,maxwater);
            height[lp]<height[rp]?lp++:rp--;
        }
        return maxwater;
    }
};