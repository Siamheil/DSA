/*Function to find frequency of x
 * x : element whose frequency is to be found
 * arr : input vector
 */
class Solution {
  public:
    int findFrequency(vector<int> arr, int x) {
        // Your code here
        int n=arr.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                count++;
            }
        }
        return count;
    }
};