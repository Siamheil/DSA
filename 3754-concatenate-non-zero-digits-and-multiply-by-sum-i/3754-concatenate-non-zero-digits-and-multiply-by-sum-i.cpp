class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        string x="";
        for (char c:s){
            if(c!='0'){
                x+=c;
            }
        }
        long long sum=0;
        for(char c:x){
            sum+=c-'0';
        }
        long long num=x.empty()?0:stoi(x);
        return (num*sum);
    }
};