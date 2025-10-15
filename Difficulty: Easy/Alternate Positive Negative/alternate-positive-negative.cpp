// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int>positives;
        vector<int>negatives;
        for(int num:arr){
            if(num>=0) positives.push_back(num);
            else negatives.push_back(num);
        }
        int i=0,j=0,k=0;
        while(i<positives.size() && j<negatives.size()){
            arr[k++]=positives[i++];
            arr[k++]=negatives[j++];
        }
        while(i<positives.size()) arr[k++]=positives[i++];
        while(j<negatives.size()) arr[k++]=negatives[j++];
    }
};