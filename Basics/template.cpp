#include <iostream>
#include <string>
using namespace std;

//class template - template<class T>
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

        T subtract();

        
};

template<class T>
T Calculate<T>::subtract(){
    // cout << a-b << endl;
    return a-b;
}

//Function Template - template<typename T>
template<typename T>
void add(T a, T b){
    cout << a+b << endl;
}

//Multiple Templates
template<typename T1, typename T2>
void displayLoot(T1 quantity, T2 item){
    cout << "You looted " << quantity << " quantity of " << item << endl; 
}

int main(){
    Calculate<int> objInt(5,6);
    objInt.add();//since this is a member function no need to specify T
    cout << objInt.subtract() << endl;

    Calculate<double> objDouble(3.4, 7.9);
    objDouble.add();
    objDouble.subtract();

    add(4,5);
    add(3.6, 4.3);
    string str1 = "qwe";
    string str2 = "rty";
    add(str1, str2); // for void functions no need to specify T while calling

    displayLoot(1000, "coins");

}

