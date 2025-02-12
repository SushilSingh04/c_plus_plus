#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;
//using namespace vector<int>;

int main(){
    vector<int> vec1(6,0);
    for(int i=0; i<vec1.size(); i++){
        cin >> vec1.at(i);
    }

    // vector<int> vec2(9,0);
    // for(int i=0; i<vec2.size(); i++){
    //     cin >> vec2.at(i);
    // }

    // vector<int> vec(vec1.size()+vec2.size(), 0);
    // vector<int> :: iterator st, it;
    //it = set_intersection(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), vec.begin());
    //reverse(vec1.begin(), vec1.end());

    // for(st=vec.begin(); st!=it; ++st){
    //     cout << *st<< ",";
    // }

    int pos;
    cin >> pos;
    // int pos, value;
    // cin >> pos >> value;
    // vec1.insert(vec1.begin()+pos, value);
    vec1.erase(vec1.begin()+pos);

    for(int i=0; i<vec1.size(); i++){
        cout << vec1.at(i)<< " ";
    }
}