#include<iostream>

using namespace std;

class Player{
    string name;
    int health;
    int xp;

    public:
        // Overloaded Constructors
        // Player(string name_val, int health_val, int xp_val);
        // Player();
        // Player(string name_val);

        

        void getVal(){
            cout << name << " " << health << " " << xp << endl;
        }

        // Default Arguments Constructor. Not always used but used to minimize code
        Player(string name_val = "None", int health_val = 0, int xp_val = 0); 
};

// Zero args constructor
// Player::Player():Player("None", 0, 0) { cout << "No-args constructor called" << endl;}

// Three args constructor
Player::Player(string name_val, int health_val, int xp_val):name{name_val}, health(health_val), xp(xp_val) {
    cout << "Three-args constructor called" << endl;
}

// // One arg constructor
// Player::Player(string name_val):Player(name_val, 0, 0) {
//     cout << "One-arg constructor called" << endl;
// }

int main(){
    Player noobie;//First the three args constructor is called and then the one arg constructor
    noobie.getVal();

    //Player hero("Hero");
    //hero.getVal();

    //Player villian("Humangsauras",78,7);
}