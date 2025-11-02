class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(int num:arr){
            freq[num]++;
        }
        vector<int>count;
        for(auto &i:freq){
            count.push_back(i.second);
        }
        sort(count.begin(),count.end());
        for(int i=1;i<count.size();i++){
            if(count[i]==count[i-1]) return false;
        }
        return true;
    }
};