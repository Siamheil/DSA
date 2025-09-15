// User function Template for C++
int distinct(vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return 0;

    sort(arr.begin(), arr.end());

    int count = 1; 
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            count++;
        }
    }
    return count;
}
