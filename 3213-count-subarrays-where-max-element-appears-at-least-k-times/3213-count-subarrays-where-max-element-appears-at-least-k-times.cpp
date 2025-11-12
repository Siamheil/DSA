class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxele=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>maxele){
                maxele=nums[i];
            }
        }
        int start=0,end=0,count = 0 ;
        long long total=0;
        while(end<n){
            if(nums[end]==maxele) count++;
            while(count==k){
                total+=n-end;
                if(nums[start]==maxele) count--;
                start++;
            }
            end++;
        }
        return total;
    }
};