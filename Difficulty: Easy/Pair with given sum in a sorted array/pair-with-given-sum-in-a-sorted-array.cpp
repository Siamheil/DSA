
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Complete the function
        unordered_map<int,int>freq;
        int count=0;
        for(int i=0;i<arr.size();i++){
            int complement=target-arr[i];
            if(freq.find(complement)!=freq.end()){
                count+=freq[complement];
            }
            freq[arr[i]]++;
        }
        return count;
    }
};