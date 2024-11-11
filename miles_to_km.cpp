#include <iostream>
using namespace std;
int main(){
    const double km_per_mile = 1.60;
    cout << "Welcome to miles to kilometers converter" << endl;
    cout << "===========================================\n";
    cout << "Enter the value in miles ";
    double miles{0};
    cin >> miles;
    cout << "The value of " << miles << " miles is " << miles * km_per_mile << " kilometers" << endl; 
}