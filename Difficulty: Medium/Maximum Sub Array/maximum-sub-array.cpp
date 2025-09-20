class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
        long long maxSum = -1, currSum = 0;
        int start = 0, bestStart = -1, bestEnd = -1;
        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] >= 0) {
                if (currSum == 0) start = i;
                currSum += arr[i];
                if (currSum > maxSum || (currSum == maxSum && (i - start > bestEnd - bestStart))) {
                    maxSum = currSum;
                    bestStart = start;
                    bestEnd = i;
                }
            } else {
                currSum = 0;
            }
        }
        if (maxSum == -1) return {-1};
        return vector<int>(arr.begin() + bestStart, arr.begin() + bestEnd + 1);
    }
};