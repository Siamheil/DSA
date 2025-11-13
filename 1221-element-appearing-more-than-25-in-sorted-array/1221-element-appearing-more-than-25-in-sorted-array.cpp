class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>freq;
        for(int num:arr){
            freq[num]++;
        }
        for(auto&[num,count]:freq){
            if(count>n/4) return num;
        }
        return 1;
    }
};