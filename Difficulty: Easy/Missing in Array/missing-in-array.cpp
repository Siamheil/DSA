class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        for(int i=0;i<=arr.size();i++){
            if(i!=arr[i-1]){
                return i;
            }
        }
        return arr.size()+1;
    }
};