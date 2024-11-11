#include <iostream>
#include <string>
using namespace std;
template<class T>
class Calculate{
    private:
        T a,b;
    public:
        Calculate(T num1, T num2){
            a = num1;
            b = num2;
        }

        void add(){
            cout << a+b << endl;
        }

        void subtract();

        
};

template<class T>
void Calculate<T>::subtract(){
    cout << a-b << endl;
}

//Function Template
template<typename T>
T add(T a, T b){
    cout << a+b << endl;
}

//Multiple Templates
template<typename T1, typename T2>
void displayLoot(T1 quantity, T2 item){
    cout << "You looted " << quantity << " quantity of " << item << endl; 
}

int main(){
    Calculate<int> objInt(5,6);
    objInt.add();
    objInt.subtract();

    Calculate<double> objDouble(3.4, 7.9);
    objDouble.add();
    objDouble.subtract();

    add<int>(4,5);
    add<double>(3.6, 4.3);
    add<string>("qwe", "rty");

    displayLoot(1000, "coins");

}

