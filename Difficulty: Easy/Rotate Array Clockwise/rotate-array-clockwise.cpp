void reverse(vector<int>&arr,int start,int end){
    while(start<=end){
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
    }
}

class Solution {
  public:
    void rotateclockwise(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        k=k%n;
        // reverse whole array
        reverse(arr, 0, n - 1);
        // reverse first k elements
        reverse(arr, 0, k - 1);
        // reverse remaining n-k elements
        reverse(arr, k, n - 1);
    }
};
