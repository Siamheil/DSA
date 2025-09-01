class Solution {
public:
    char findTheDifference(string s, string t) {
        int XOR=0;
        for(char &ch : s){
            XOR ^= ch;
        }
        for(char &ch : t){
            XOR ^= ch;
        }
        return (char)XOR;
    }
};