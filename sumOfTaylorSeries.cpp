#include <iostream>

using namespace std;

double taylor(int x, int n){
    static double p = 1, q = 1;
    double r;
    if(n == 0){
        return 1;
    }

    r = taylor(x, n-1);
    p *= x;
    q *= n;

    return r + p/q;
}

double e(int x, int n){
    static double s = 1;
    if(n == 0) return s;
    
    s = 1+(x*s/n);
    return e(x,n-1);
}

int main(){
    cout << taylor(4, 10) << endl;
    cout << e(4, 10);
}