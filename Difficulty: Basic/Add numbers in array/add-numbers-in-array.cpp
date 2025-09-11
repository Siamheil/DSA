//User function Template for C++

class Solution{
    public:
    long long get_Sum(int n,vector<int>&input)
    {
        //your code here
        int size=input.size();
        long long ans=0;
        for(int i=0;i<size;i++){
            ans=ans+input[i];
        }
        return ans;
    }
};
