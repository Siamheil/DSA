class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        // code here
        int n=arr.size();
         unordered_map<int, int> count;
        for(int &num : arr){
            count[num]++;
        }
        vector<vector<int>>result;
        for(int num:arr){
            if(count[num]>0){
                result.push_back({num,count[num]});
                count[num]=0;
            }
        }
        return result;
    }
};