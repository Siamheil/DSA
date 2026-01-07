class Solution {
public:
    int n;
    bool hasDuplicates(string &s1,string &s2){
        int arr[26]={0};
        for(char &ch:s1){
            if(arr[ch-'a']>0) return true;
            arr[ch-'a']++;
        }
        for(char &ch:s2){
            if(arr[ch-'a']>0) return true;
            arr[ch-'a']++;
        }
        return false;
    }
    int solve(int i,vector<string>& arr,string &temp){
        if(i>=n) return  temp.length();
        int include=0;
        int exclude=0;
        if(hasDuplicates(temp,arr[i])){
            exclude=solve(i+1,arr,temp);
        }else{
            exclude=solve(i+1,arr,temp);
            string newTemp=temp+arr[i];
            include=solve(i+1,arr,newTemp);
        }
        return max(exclude,include);
    }
    int maxLength(vector<string>& arr) {
        n=arr.size();
        string temp="";
        return solve(0,arr,temp);
    }
};