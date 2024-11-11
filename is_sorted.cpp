#include <iostream>
using namespace std;

bool is_sorted(int arr[], int size){
    if(size==0) return true;
    if(arr[size-1] >= arr[size-2]) size--;
    else return false;
}
int main(){
    int arr[5] = {1,2,3,100,5};
    cout << boolalpha;
    cout << is_sorted(arr, 5);
}