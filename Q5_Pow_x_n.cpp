#include<iostream>
#include<vector>
using namespace std;

double pow(double x , int n) {
    if( n==0 ) return 1;
    if( x==0 ) return 0;
    if (x==-1 && n%2==0) return 1;
    if (x==-1 && n%2!=0) return -1;

    if (n<0) {
        x= 1/x;
        n = -n;
    }
    double ans = 1;
    while(n>0) {
        if(n%2==1) {
            ans = ans * x;
            n--;
        } else {
            x = x*x;
            n = n/2;
        }
    }
    return ans;
}

int main() {
    double x = 2.0;
    int n = 10;
    cout << "pow(" << x << ", " << n << ") = " << pow(x, n) << endl;

    x = 2.0;
    n = -2;
    cout << "pow(" << x << ", " << n << ") = " << pow(x, n) << endl;

    x = -1.0;
    n = 5;
    cout << "pow(" << x << ", " << n << ") = " << pow(x, n) << endl;

    x = -1.0;
    n = 4;
    cout << "pow(" << x << ", " << n << ") = " << pow(x, n) << endl;

    return 0;
}