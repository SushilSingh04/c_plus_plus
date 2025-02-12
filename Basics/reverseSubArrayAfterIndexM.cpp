#include<bits/stdc++.h>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
}


void reverseArray(vector<int> &arr , int m) {
    for(int i=m+1, j=arr.size()-1; i<j; i++, j--){
        cout << arr[i] << arr[j] << endl;
        swap(arr[i], arr[j]);
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    reverseArray(arr, 3);
    for(int i=0; i<6; i++){
        cout << arr[i] << " ";
    }
    
}