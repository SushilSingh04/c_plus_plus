#include <iostream>

using namespace std;

class Player{
    string name;
    int *health;
    int xp;

    public:
        //Player(string name_val, int health_val, int xp_val);
        Player(const Player &source);

        void getVal(){
            cout << name << " " << *health << " " << xp << endl;
        }

        void setHealth(int health_val){
            *health = health_val;
        }

        // Default Arguments Constructor
        Player(string name_val = "None", int health_val = 0, int xp_val = 0);

        //Destructor
        ~Player(){
            delete health;
            cout << "Destructor called" << endl;
        }
};

Player::Player(string name_val, int health_val, int xp_val):name{name_val}, xp{xp_val} { 
    health = new int(health_val);
    cout << "Constructor called " << endl;
}

Player::Player(const Player &source): name{source.name}, health{source.health}, xp{source.xp} {
    cout << "Copy of " << source.name << " made" << endl;
}

int main(){
    Player hero("Hero", 78, 9);
    Player hero_copy(hero);
    hero.getVal();
    hero.setHealth(34);
    hero.getVal();
    hero_copy.getVal();
}