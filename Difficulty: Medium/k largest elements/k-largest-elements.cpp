class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // Your code here
        vector<int>ans;
        priority_queue<int,vector<int>,greater<int>>minheap;
        for(int num:arr){
            minheap.push(num);
            if(minheap.size()>k){
                minheap.pop();
            }
        }
        while(!minheap.empty()){
            ans.push_back(minheap.top());
            minheap.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};