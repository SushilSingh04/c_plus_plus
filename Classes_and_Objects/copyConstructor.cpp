#include<iostream>

using namespace std;


class Player{
    string name;
    int health;
    int xp;

    public:
        //Player(string name_val, int health_val, int xp_val);
        Player(const Player &source);
        void getVal(){
            cout << name << " " << health << " " << xp << endl;
        }

        // Default Arguments Constructor
        Player(string name_val = "None", int health_val = 0, int xp_val = 0); 
};

Player::Player(string name_val, int health_val, int xp_val):name{name_val},health{health_val}, xp{xp_val} { 
    cout << "Constructor called " << endl;
}

Player::Player(const Player &source): name{source.name}, health{source.health}, xp{source.xp} {
    cout << "Copy of " << source.name << " made" << endl;
}

int main(){
    Player hero("Hero",78,9);
    Player hero_copy(hero);
    hero_copy.getVal();
}