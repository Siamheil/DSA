class Solution {
public:
    int findMinimumOperations(string a, string b, string c) {
        if(a[0]!=b[0] || a[0]!=c[0] || c[0]!=b[0]) return -1;
        int p=a.size();
        int q=b.size();
        int r=c.size();
        int n=min({p,q,r}),i;
        for(i=0;i<n;i++){
            if(a[i]!=b[i] || c[i]!=b[i]) return p+q+r-(3*i);
        }
        return p+q+r-(3*i);
    }
};