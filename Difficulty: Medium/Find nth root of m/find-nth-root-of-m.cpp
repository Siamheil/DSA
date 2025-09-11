class Solution {
  public:
    int nthRoot(int n, int m) {
        int low = 1, high = m;
        
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            
            long long ans = 1;
            for (int i = 0; i < n; i++) {
                ans = ans * mid;
                if (ans > m) break; 
            }
            
            if (ans == m) return mid;      
            else if (ans < m) low = mid+1; 
            else high = mid-1;             
        }
        
        return -1; 
    }
};
