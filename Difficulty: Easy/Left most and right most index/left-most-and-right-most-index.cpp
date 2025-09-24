class Solution {
  public:
    pair<long, long> indexes(vector<long long> v, long long x) {
        // code here
        int n=v.size();
        int start=0,end=n-1;
        int first=-1,last=n;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(v[mid]==x){
                first=mid;
                end=mid-1;
            }
            else if(v[mid]<x) start=mid+1;
            else end=mid-1;
        }
        if(first==-1){
            return {-1,-1};
        }
        start=0;
        end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(v[mid]==x){
                last=mid;
                start=mid+1;
            }
            else if(v[mid]<x) start=mid+1;
            else end=mid-1;
        }
        return {first,last};
    }
};