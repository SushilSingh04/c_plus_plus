//Display the terms in a sequence whose common difference is in A.P

#include <iostream>

using namespace std;

int sequence(int n){
    if(n > 0){
        return sequence(n-1) + n; 
    }

    return 0;
}
int main(){
    int n = 5;
    for(int i=0; i<n; i++){
        cout << sequence(i) << " ";
    }
}