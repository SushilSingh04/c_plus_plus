#include<iostream>

using namespace std;

class Player{
    private:
    static int numPlayers;
    string name;
    int health;
    int xp;

    public:
        Player(string name_val, int health_val, int xp_val);

        static int getNumPlayers(){
            return numPlayers;
        }

        //Destructor
        ~Player(){
            --numPlayers;
        }
};

Player::Player(string name_val, int health_val, int xp_val):name{name_val}, xp{xp_val}, health{health_val} {
    ++numPlayers;
}

int Player::numPlayers{0};

void printNumPlayers(){
    cout << "Number of active players: " << Player::getNumPlayers() << endl;
}

int main(){
    Player hero("Hero", 67, 9);
    printNumPlayers();
    {
        Player villain("Villain", 90, 45);
        printNumPlayers();
    }

    printNumPlayers();


}