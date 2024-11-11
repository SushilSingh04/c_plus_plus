#include <iostream>
using namespace std;
int main(){
    cout << "Enter the number of cents : ";
    int cents {0};
    cin >> cents;
    int dollars  = cents / 100;
    //cents -= (cents/100)*100;
    cents = cents % (100);
    int quarters = cents / 25;
    //cents -= (cents/25)*25;
    cents  = cents % (25);
    int dimes = cents / 10;
    //cents -= (cents/10)*10;
    cents = cents % (10);
    int nickels = cents / 5;
    //cents -= (cents/5)*5;
    cents = cents % (5);
    int penny = cents;

    cout << "\n number of dollars : " << dollars << endl;
    cout << " number of quarters : " << quarters << endl;
    cout << " number of dimes : " << dimes << endl;
    cout << " number of nickels : " << nickels << endl;
    cout << " number of penny : " << penny << endl;

}