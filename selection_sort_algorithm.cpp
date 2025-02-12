#include <iostream>
#include <climits>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int arr[], int size){
    int index_min = 0;
    for(int i = 0; i < size; i++){
    int min = INT_MAX;
        for(int j = i; j<size; j++){
            if(arr[j] < min){
                min = arr[j];
                index_min = j;
            }
        }
        if(index_min != i){
            swap(&arr[index_min],&arr[i]);
        }
    }
}
int main(){
    int arr[] = {9,0,8,3,7,6,1,5,89,87,56,30,90};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, size);
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

}