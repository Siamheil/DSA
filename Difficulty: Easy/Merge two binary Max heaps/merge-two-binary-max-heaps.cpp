// User function Template for C++

class Solution {
  public:
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        vector<int>ans;
        for(int i=0;i<n;i++) ans.push_back(a[i]);
        for(int i=0;i<m;i++) ans.push_back(b[i]);
        make_heap(ans.begin(),ans.end());
        return ans;
    }
};