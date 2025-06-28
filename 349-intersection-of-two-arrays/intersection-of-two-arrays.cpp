class Solution {
public:
    int binarySearch(vector<int>& nums2,int size,int target){
      int start= 0;
      int end= size-1;
      while(start<=end){
        int mid = start +((end-start)/2);
        if(nums2[mid]==target){
            return 1;
        }
        if(nums2[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
      }
       return -1;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums2.begin(),nums2.end());
        vector<int>nums;
        for(int i=0;i<=nums1.size()-1;i++){
          int target= nums1[i];
          int search= binarySearch(nums2,nums2.size(),target);
          if (search==1){
            // instance of element found in nums2 array, check for duplicates.
            int cnt = count(nums.begin(), nums.end(), target);
            
            if (cnt == 0){
// Element is not present in the output array.
                nums.push_back(target);}
            }
        }
        return nums;
    }
 // Hope this helps!
// kindly upvote!
};