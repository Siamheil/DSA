class Solution {
public:
    void sort012(vector<int>& arr) {
        int low = 0, mid = 0, high = arr.size()-1;
        while(mid <= high){
            if(arr[mid] == 0){
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            }
            else if(arr[mid] == 1){
                mid++;
            }
            else{
                swap(arr[mid], arr[high]);
                high--;
            }
        }
    }
};