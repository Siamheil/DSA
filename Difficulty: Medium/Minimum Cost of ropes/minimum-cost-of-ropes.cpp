class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<long long,vector<long long>,greater<long long>>p;
        for(long long i=0;i<arr.size();i++)
        p.push(arr[i]);
        long long cost=0;
        while(p.size()>1){
            long long rope=p.top();
            p.pop();
            rope+=p.top();
            p.pop();
            cost+=rope;
            p.push(rope);
        }
        return cost;
    }
};