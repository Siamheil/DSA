class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size();
        vector<int>freq(1000000,0);
        for(int num:arr){
            freq[num]++;
        }
        int lucky=-1;
        for(int i=1;i<=n;i++){
            if(freq[i]==i){
                lucky=i;
            }
        }
        return lucky;
    }
};