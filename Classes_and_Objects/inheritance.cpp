#include <iostream>
using namespace std;

class Parent
{
private:
    /* data */
public:

};

class child : public Parent
{
}

//Zombie Shooter game

class MasterZombie{
  protected:
  string name = "Zombie";
  int height;
  string power;  
};

class zombie1 : public MasterZombie{
    string description;
    zombie1{
        cout << ""
    }
    void fly(){
        cout << name; // Can access protected variable of the parent class in a child class
    }
};




class A{
    void test(){
        cout << name; // Cannot access a protected variable(not a child of the parent class)
    }
};





int main(){

}