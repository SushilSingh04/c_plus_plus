#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    char selection;
    do{
        cout << "\nChoose one of the following - "<< endl;
        cout << "\nP Print Numbers"<<endl;
        cout << "A Add a number"<<endl;
        cout << "M Display mean of the numbers"<<endl;
        cout << "S Display the smallest number" << endl;
        cout << "L Display the largest number"  <<endl;
        cout << "Q Leave"<<endl;
        cout << "\nEnter your selection - ";
        cin >> selection;
        cout << "\n";

        vector <int> nums{1,2,6,6};
        switch(selection){
            case 'p':
            case 'P': {
                cout << "[ ";
                for(auto num: nums){
                    cout << num <<" "; 
                }
                cout << "]"<<endl;
                break;
            }
            case 'a':
            case 'A': {
                int k;
                cout << "Enter an element to push - "<<endl;
                cin >> k;
                nums.push_back(k);
                cout << k << " added" << endl;
                break;
            }
            case 'm':
            case 'M': {
                int sum{0};
                for(auto num: nums){
                    sum += num;
                }
                if(nums.size() != 0){
                    cout << "The mean is - "<< static_cast<double>(sum)/nums.size() << endl; break;
                }
                else{
                    cout << "Unable to print the mean - No Data" << endl;
                }
                break;
            }
            case 's':
            case 'S': {
                int min = INT_MAX;
                for(auto num: nums){
                    if(num < min){
                        min = num;
                    }
                }
                cout << "The smallest element is - "<< min << endl;
                break;
            }
            case 'l':
            case 'L': {
                int max = INT_MIN;
                for(auto num: nums){
                    if(num > max){
                        max = num;
                    }
                }
                cout << "The largest element is - " << max << endl;
                break;
            }
            case 'Q':
            case 'q': cout << "Yo Goodbye!."<< endl; break;
            default : cout << "Unkbown selection, please try again"<<endl;
        }
    }
    while(selection != 'q' || selection != 'Q');
}