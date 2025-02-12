#include <iostream>

using namespace std;
int main(){
    cout << "How many rooms small rooms would you like cleaned? ";
    int small_rooms{0};
    cin >> small_rooms;
    cout << "How many rooms large rooms would you like cleaned? ";
    int large_rooms{0};
    cin >> large_rooms;

    const double price_per_small_room{25};
    const double price_per_large_room{35};
    const int estimate_expiry{30}; //days
    const double sales_tax{0.06}; // percentage

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;
    cout << "Cost: $" << price_per_small_room * small_rooms + price_per_large_room * large_rooms << endl;
    double cost = price_per_small_room * small_rooms + price_per_large_room * large_rooms;
    cout << "Tax: $" << price_per_small_room * small_rooms * sales_tax + price_per_large_room * large_rooms * sales_tax << endl;
    double tax = price_per_small_room * small_rooms * sales_tax + price_per_large_room * large_rooms * sales_tax;
    cout <<"======================================================" << endl;
    cout << "Total_estimate: $" << cost + tax << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days"<< endl;
    
}