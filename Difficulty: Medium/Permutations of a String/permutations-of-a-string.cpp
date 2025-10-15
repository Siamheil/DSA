class Solution {
  public:
    void solve(string &s,string temp,set<string>&ans,vector<bool>visited){
        if(s.size()==temp.size()){
            ans.insert(temp);
            return;
        }
        for(int i=0;i<s.size();i++){
            if(visited[i]==0){
                visited[i]=1;
                temp.push_back(s[i]);
                solve(s,temp,ans,visited);
                visited[i]=0;
                temp.pop_back();
            }
        }
    }
    vector<string> findPermutation(string &s) {
        // Code here there
        int n=s.size();
        string temp="";
        set<string>ans;
        vector<bool>visited(n,0);
        solve(s,temp,ans,visited);
        return vector<string>(ans.begin(),ans.end());
    }
};
