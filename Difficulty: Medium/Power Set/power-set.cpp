class Solution {
  public:
   void powerSet(string s,int index,int n,vector<string>&ans,string temp){
       if(index==n){
           ans.push_back(temp);
           return;
       }
       powerSet(s,index+1,n,ans,temp);
       temp.push_back(s[index]);
       powerSet(s,index+1,n,ans,temp);
       temp.pop_back();
   }
  
    vector<string> AllPossibleStrings(string s) {
        // Code here
        int n=s.size();
        string temp="";
        vector<string>ans;
        powerSet(s,0,n,ans,temp);
        sort(ans.begin(),ans.end());
        return ans;
    }
};