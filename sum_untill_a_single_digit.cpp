#include<iostream>

using namespace std;

int sum(int n){
    if(n == 0){
        return 0;
    }

    return sum(n-1) + n;
}

int sumOfDigits(int n){
    if(n == 0) return 0;
    return sumOfDigits(n/10) + n%10;
}

int main(){
    int n;
    do{
        cin >>  n;
        cout << sum(n);
    }while(n%10 != n);
    // while(true){
    //     cin >> n;
    //     if(sumOfDigits(n) % 10 == sumOfDigits(n)) break;
    //     cout << sumOfDigits(n);
    // }
}