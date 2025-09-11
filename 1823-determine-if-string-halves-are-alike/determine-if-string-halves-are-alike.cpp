class Solution {
public:
    bool isVowel(char &ch){
        return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' 
        || ch=='A' || ch=='E' || ch=='O' || ch=='I' || ch=='U');
    }
    bool halvesAreAlike(string s) {
        int n=s.size();
        int mid=n/2;
        int i=0,j=mid;
        int countL=0;
        int countR=0;
        while(i<n/2 && j<n){
            if(isVowel(s[i])) countL++;
            if(isVowel(s[j])) countR++;
            i++;
            j++;
        }
        return countL==countR;
    }
};