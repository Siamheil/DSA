class Solution {
  public:
    int closestToZero(int arr[], int n) {
        // your code here
        sort(arr,arr+n);
        int closestSum=1000000;
        int start=0,end=n-1;
        while(start<end){
            int sum=arr[start]+arr[end];
            if(abs(0-sum)<abs(0-closestSum)
            || abs(0-sum)==abs(0-closestSum)&& sum>closestSum)
            closestSum=sum;
            else if(sum<0) start++;
            else end--;
        }
        return closestSum;
    }
};