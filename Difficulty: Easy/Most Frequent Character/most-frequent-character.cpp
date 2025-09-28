class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        int n=s.size();
        vector<int>freq(26,0);
        for(int i=0;i<n;i++){
            char ch=s[i];
            int number=0;
            if(ch>='A' && ch<='Z'){
                number=ch-'A'+'a';
            }
            number=ch-'a';
            freq[number]++;
        }
        int maximum=-1;
        int ans=0;
        for(int i=0;i<26;i++){
            if(freq[i]>maximum){
                ans=i;
                maximum=freq[i];
            }
        }
        char finalAns='a'+ans;
        return finalAns;
    }
};