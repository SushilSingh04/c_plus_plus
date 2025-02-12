#include<iostream>

using namespace std;

class Deep{
    int *data;
    public:
        Deep(int val);
        Deep(const Deep &source);
        void display();
        void setData(int val);

        ~Deep(){
            delete data;
            cout << "Destructor called" << endl;
        }
};

Deep::Deep(int val){
    data = new int;
    *data = val;
}

//Copy constructor using delegating constructor
// Deep::Deep(const Deep &source):Deep(*source.data){
//     cout << "Copy constructor is called -deep" << endl;
// }

Deep::Deep(const Deep &source){
    data = new int;
    *data = *source.data;
    cout << "Copy Constructor called -deep" << endl;
}

void Deep::display(){
    cout << "Value of data is " << *data << endl;
}

void Deep::setData(int val){
    *data = val;
}

int main(){
    Deep deep(9);
    deep.display();
    deep.setData(12);
    deep.display();
    Deep deep_copy(deep);
    deep_copy.setData(19);
    deep_copy.display();
    deep.display();
}