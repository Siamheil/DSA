// User function Template for C++

class Solution {
public:
    vector<int> leaders(vector<int>arr) {
        int n=arr.size();
        vector<int> ans;
        int maxFromRight = arr[n - 1];  
        ans.push_back(maxFromRight);

        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= maxFromRight) {
                maxFromRight = arr[i];
                ans.push_back(arr[i]);
            }
        }
        reverse(ans.begin(), ans.end());  
        return ans;
    }
};
