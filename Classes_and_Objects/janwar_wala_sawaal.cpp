#include<iostream>
using namespace std;

class Aninmal{
  public:
    string species;
    int age;
    double weight;

    Animal(string species, int age, double weight){
        this->age = age;
        this->species = species;
        this->weight = weight;
    }

    void displayInfo(){
        cout << species;
        cout << age;
        cout << weight;
    }
};

class Mammal : public Animal{
    public:
        string furColor;
        Mammal(string species, int age, double weight, string furColor){
            this.species = species;
            this.age = age;
            this.weight = weight;
            this.furColor = furColor;
        }

        void makeSound(){
            
        }

};

class Bird : public Animal{
    public:
        double wingSpan;

        Bird(string species, int age, double weight, double wingSpan){

            this->wingSpan = wingSpan;
            this->age = age;
            this->species = species;
            this->weight = weight;
        }

        void fly(){
            cout << species << " is flying with a wingspan of " << wingSpan;
        }
};

int main(){

}