class Solution {
  public:
    int firstElementKTime(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int> count;
        for(int num:arr){
            count[num]++;
            if(count[num]==k)
            return num;
        }
        return -1;
    }
};