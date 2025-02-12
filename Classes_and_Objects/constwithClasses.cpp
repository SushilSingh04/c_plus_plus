#include <iostream>

using namespace std;

class Player{
    string name;
    int health;
    int xp;

    public:
        Player(string name_val, int health_val, int xp_val);

        void getName() {
            cout << name << endl;
        }
};

Player::Player(string name_val, int health_val, int xp_val):name{name_val}, health(health_val), xp(xp_val) {
    // cout << "Three-args constructor called" << endl;
}

void displayPlayerName(const Player &p){
    p.getName();
}

int main(){
    const Player villain("Villain", 100, 10); // creates an object on which non-const methods can not be called
    Player hero("Hero", 78, 8);

    // villain.getName();
    hero.getName(); //ERROR if const qualifier not used with method getName() because of a call to getName() in some other function

    // displayPlayerName(villain);
    // displayPlayerName(hero); // 
}