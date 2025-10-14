// User Function Template
class Solution {
  public:
    vector<int> closestPairSum(vector<int> &arr, int target) {
        // Code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int closestSum=1000000;
        int maxDiff=-1;
        vector<int>result;
        int start=0,end=n-1;
        while(start<end){
            int sum=arr[start]+arr[end];
            int diff=abs(arr[start]-arr[end]);
            if(abs(target-sum)<abs(target-closestSum) ||
            abs(target-sum)==abs(target-closestSum)&& diff>maxDiff){
            closestSum=sum;
            maxDiff=diff;
            result={arr[start],arr[end]};
            }
            else if(sum<target) start++;
            else end--;
        }
        return result;;
    }
};