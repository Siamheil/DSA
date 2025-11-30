class Solution {
public:
    void merge(vector<int>&nums,int start,int mid,int end){
        vector<int>temp;
        int i=start,j=mid+1;
        while(i<=mid && j<=end){
            if(nums[i]<=nums[j]){
                temp.push_back(nums[i]);
                i++;
            }else{
                temp.push_back(nums[j]);
                j++;
            }
        }
        while(i<=mid) temp.push_back(nums[i++]);
        while(j<=end) temp.push_back(nums[j++]);
        for(int k=start;k<=end;k++){
            nums[k]=temp[k-start];
        }
    }
    void mergesort(vector<int>& nums,int start,int end){
        if(start>=end) return;
        int mid=start+(end-start)/2;
        mergesort(nums,start,mid);
        mergesort(nums,mid+1,end);
        merge(nums,start,mid,end);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};