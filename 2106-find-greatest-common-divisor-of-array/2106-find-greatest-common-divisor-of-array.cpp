class Solution {
public:
    int findGCD(vector<int>& arr) {
        int n=arr.size();
        int largest=INT_MIN;
        int smallest=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                largest=arr[i];
            }
        }
        for(int i=0;i<n;i++){
            if(smallest>arr[i]){
                smallest=arr[i];
            }
        }
        return gcd(largest,smallest);
    }
    private:
        int gcd(int a,int b){
            if(b==0) return a;
            return gcd(b,a%b);
        }
};