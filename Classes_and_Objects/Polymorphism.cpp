#include <iostream>

using namespace std;

//1. Function Overloading
void add(int num1, int num2){
    cout << num1+num2 << endl;
}

void add(double num1, double num2){
    cout << num1+num2 << endl;
}

//Not allowed as functions with same name and signature cannot have different data types.
//Compiler wouldn't know which function to execute
int add(int num1, int num2){
    cout << num1+num2+10 << endl;
}

int main(){
    int a = 8, b=9;
    double s = 8.4, q = 3.4;

    add(a,b);
    add(s,q);
    add(4,5);
}