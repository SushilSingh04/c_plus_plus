#include<iostream>
#include<string>

using namespace std;
// 0. friend functions are standalone functions
// 1. friend must be granted by a class
// 2. friend can be function, function of some other class, some other class
// 3. They can access everything in a class from outside the class

class Person{
    string name;
    public:
    Person(string name){
        this->name = name;
    }

    void get_name(){
        cout << name << endl;
    }
    friend void display_person(Person &p);

};

void display_person(Person &p){
    cout << p.name << endl;
    // p.name = "Friend" << endl; //Changed a private member of the class
}

int main(){
    Person p("person1");
    display_person(p);
    p.get_name();

}