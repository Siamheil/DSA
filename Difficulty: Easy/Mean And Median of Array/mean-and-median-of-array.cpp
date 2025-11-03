class Solution {
  public:
    int mean(vector<int>& arr) {
        // code here
        int sum=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        return sum/n;
    }

    int median(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        if(n%2==1){
            return arr[n/2];
        }
        else{
            return (arr[n/2-1]+arr[n/2])/2;
        }
    }
};
