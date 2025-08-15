class Solution {
public:
    bool isPalindrome(int x) {
       long long rev=0,y=x;
       if(x<0) return false;
       while(x!=0)
       {
        rev*=10;
        rev+=(x%10);
        x/=10;
       } 
       if(y==rev) return 1;
       else return 0;
    }
};