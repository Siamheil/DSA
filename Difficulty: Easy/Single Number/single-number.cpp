// User function template for C++
class Solution {
  public:
    int getSingle(vector<int>& arr) {
        // code here
        int ans=0;

        for(int val : arr) {
            ans = ans ^ val;
        }

        return ans;
    }
};