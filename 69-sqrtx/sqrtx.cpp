class Solution {
public:
    int mySqrt(int x) {
        int ans=0;
        long long lo=0;
        long long hi=x;
        while(lo<=hi){
            long long mid=(lo+hi)/2;
            if(mid*mid == x)
            return mid;
            else if(mid*mid > x)
            hi=mid-1;
            else{
                lo=mid+1;
                ans=mid;
            }
        
        }
        return ans;
    }
};