// User function Template for C++
class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        vector<int> ans;
        int n = a.size();
        int m = b.size();
        int i = 0, j = 0;

        while (i < n && j < m) {
            if (a[i] == b[j]) {
                ans.push_back(a[i]);
                i++;
                j++;
            }
            else if (a[i] < b[j]) {
                i++;
            }
            else {
                j++;
            }
        }
        return ans;
    }
};
