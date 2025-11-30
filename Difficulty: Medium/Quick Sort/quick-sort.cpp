class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        if(low>=high) return;
        int pivot=partition(arr,low,high);
        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high);
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        int pos=low;
        for(int i=low;i<=high;i++){
            if(arr[i]<=arr[high]){
                swap(arr[i],arr[pos]);
                pos++;
            }
        }
        return pos-1;
    }
};