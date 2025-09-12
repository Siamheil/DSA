class Solution {
  public:
    int findPeakElement(vector<int>& a) {
        // Code here.
        int n=a.size();
        if(n==1 || a[0]>a[1]) return a[0];
        if(a[n-1]>a[n-2]) return a[n-1];
        int start=0,end=n-1;
        for(int i=0;i<n;i++){
            int mid=start+(end-start)/2;
            if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
            return a[mid];
            else if(a[mid]>a[mid-1])
            start=mid+1;
            else
            end=mid-1;
        }
        return -1;
    }
};
