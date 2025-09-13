// User function Template for C++

bool prime(int n) {

    // Write your code here
    if(n<2) return false;
    for(int i=2;i<n;i++){
        if(n%i==0) return false;
    }
    // returns a boolean value
    return true;
}