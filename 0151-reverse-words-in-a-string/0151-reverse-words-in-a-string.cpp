class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int n=s.size();
        int l=0;
        int r=0;
        int i=0;
        while(i<n){
            while(i<n && s[i]!=' '){
                s[r]=s[i];
                r++;
                i++;
            }
            if(l<r){
                reverse(s.begin()+l,s.begin()+r);
                s[r]=' ';
                r++;
                l=r;
            }
            i++;
        }
        s=s.substr(0,r-1);
        return s;
    }
};