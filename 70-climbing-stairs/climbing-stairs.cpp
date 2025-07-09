class Solution {
public:
    int climbStairs(int n) {
        
        if (n==0 || n==1)
        return 1;

        int first=1;
        int second=1;
        int result=0;

        for (int i=2; i<=n; i++)
        {
            result=first+second;
            first=second;
            second=result;
        }
        return result;
    }
};