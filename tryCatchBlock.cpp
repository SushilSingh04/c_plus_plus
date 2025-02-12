#include<iostream>

using namespace std;

int main(){
    int den, num;
    cin >> num >> den;
    //try{
        if(den == 0){
            throw 0; // throws an error which can be caught by the catch block
        }

        double ans = num/den;
        cout << "The answer is " << ans << endl;
    //}
    //catch(int err){
    //    cout << "Exception thrown " << err << endl;
    //}

    cout << "Statement 3" << endl; // The rest of the code works just fine
}