class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long>p;
        for(long long num:gifts)
        p.push(num);
        long long maxgifts=0;
        while(k--&&!p.empty()){
            long long gift=p.top();
            p.pop();
            gift=floor(sqrt(gift));
            p.push(gift);
        }
        while(!p.empty()){
            maxgifts+=p.top();
            p.pop();
        }
        return maxgifts;
    }
};