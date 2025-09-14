/*Function to swap array elements
 * arr : array input
 */
class Solution {
  public:
    // Function to swap elements of the array
    void swapElements(vector<int> &arr) {
        // Your code here
        int n=arr.size();
        for(int i=0;i+2<n;i++){
            swap(arr[i],arr[i+2]);
        }
    }
};