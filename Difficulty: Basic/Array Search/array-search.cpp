class Solution {
  public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(vector<int>& arr, int X) {

        // Your code here
        for(int i=0;i<arr.size(); i++)
            if( arr[i] == X)
                return i;
        return -1;
    }
};