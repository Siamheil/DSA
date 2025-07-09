class Solution {
public:
    int climbStairs(int n) {
        if(n==1||n==0){
            return 1;
        }
        int prev1=1,prev2=1;
        int curr;
        for(int i=2;i<=n;i++){
            curr=prev1+prev2;
            prev2=prev1;
            prev1=curr;
        }
        return curr;
    }
    
};