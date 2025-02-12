#include <iostream>
#include <vector>
using namespace std;

void reverse_array(vector<int> &arr){
    int n=(arr).size();
    for(int i=n-1,j=0;i>j;i--,j++){
        int temp=arr.at(i);
        arr.at(i)=arr.at(j);
        arr.at(j)=temp;
    }
}
int main(){
    vector<int> arr{1,2,3,4,5,67,46,25636,255};
    reverse_array(arr);
    for(int i=0; i<arr.size(); i++){
        cout << arr.at(i) << " ";
    }
}