class Solution {
public:
    typedef pair<int,int> P;
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<P, vector<P> , greater<P> > pq;
        for(int i =0; i< nums.size(); i++)
        {
            pq.push({nums[i], i});
            if(pq.size() > k)
            pq.pop();
        }
        vector<int> answer;
        while(!pq.empty())
         {
            answer.push_back(pq.top().second);
            pq.pop();
         }
        sort(answer.begin(), answer.end());
        for(int i = 0; i< answer.size(); i++)
            answer[i] = nums[answer[i]];
        
        return answer;
    }
};