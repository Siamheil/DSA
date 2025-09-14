// User function template for C++
class Solution {
  public:
    int isPanagram(string S) {
        vector<int> arr(26, 0);

        for (char &ch : S) {
            if (isalpha(ch)) {        
                char lower = tolower(ch);  
                int index = lower - 'a';  
                arr[index] = 1;        
            }
        }
        for (int count : arr) {
            if (count == 0) return 0;
        }
        return 1;
    }
};
