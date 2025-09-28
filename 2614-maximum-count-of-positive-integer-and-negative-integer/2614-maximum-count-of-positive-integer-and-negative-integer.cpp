class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int countpos=0;
        int countneg=0;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                countpos++;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                countneg++;
            }
        }
        return max(countpos,countneg);
    }
};