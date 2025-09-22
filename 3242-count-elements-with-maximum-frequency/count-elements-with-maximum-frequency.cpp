class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int>count(101);
        int maxFreq=0;
        for(int &num : nums){
            count[num]++;
            maxFreq=max(maxFreq,count[num]);
        }
        int result=0;
        for(int i=0;i<101;i++){
            if(count[i]==maxFreq){
                result+=maxFreq;
            }
        }
        return result;
    }
};