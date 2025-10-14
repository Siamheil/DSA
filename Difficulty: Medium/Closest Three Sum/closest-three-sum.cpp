// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        int n=arr.size();
        int closestSum=10000000;
        int start=0,end=n-1;
        sort(arr.begin(),arr.end());
        for(int k=0;k<n-2;k++){
            int i=k+1;
            int j=n-1;
            while(i<j){
                int sum=arr[i]+arr[j]+arr[k];
                if(abs(target-sum)<abs(target-closestSum)||
                (abs(target-sum)==abs(target-closestSum) && sum>closestSum))
                closestSum=sum;
                else if(sum<target) i++;
                else j--;
            }
        }
        return closestSum;
    }
};
