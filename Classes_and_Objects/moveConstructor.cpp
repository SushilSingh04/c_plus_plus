#include<iostream>
#include<vector>

using namespace std;

class Move{
    int *data;

    public:
        Move(int val){
            data = new int(val);
            cout << "Copy constructor called" << endl;
        }
        //copy constructor
        Move(const Move &source) {
            data = new int;
            *data = *source.data;
            cout << "copy constructor called" << endl;
        }

        //Move constructor
        Move(Move &&source){
            *data = *source.data;
            source.data = NULL;
            cout << "Move constructor called" << endl;
        }

        ~Move(){
            cout << "Destructor called" << endl;
        }
};

int main(){
    vector<Move> moves;
    moves.push_back(Move{10});
    moves.push_back(Move{20});
}