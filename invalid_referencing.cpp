#include<iostream>
#include <string>
using namespace std;
#define m 6
//l-value has some address in the memory that program can access .
//l-values appear on the left of an '=' sign expression because they can store some value in it.
int main(){
    int *r = &m;
    cout << *r;
}