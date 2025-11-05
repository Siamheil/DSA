class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(int num:stones)
        pq.push(num);
        while(pq.size()>1){
            int weight=pq.top();
            pq.pop();
            weight=weight-pq.top();
            pq.pop();
            if(weight)
            pq.push(weight);
        }
        if(pq.empty()) return 0;
        return pq.top();
    }
};