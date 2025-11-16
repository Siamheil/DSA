class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index=word.find(ch);
        if(index==string::npos) return word;
        reverse(word.begin(),word.begin()+index+1);
        return word;
    }
};