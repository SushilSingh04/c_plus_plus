#include<iostream>

using namespace std;

int pow(int base, int power){
    if(power > 0){
        return pow(base, power-1)*base;
    }

    return 1;
}
// reduces the number multiplications
int pow2(int n, int m){
    if(m == 0) return 1;

    if(n % 2 == 0){
        return pow(n*n, m/2);
    }

    else{
        return n*pow(n*n, m/2);
    }
}

int main(){
    cout << pow2(2,4);
}