#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    // Write Code to Swap
    int temp=a;
    a=b;
    b=temp;
    cout << a << " " << b << endl;
    return 0;
}