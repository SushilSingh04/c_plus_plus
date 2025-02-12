#include<bits/stdc++.h>

using namespace std;

int main(){
    map<int, string> students = {{1, "a"}, {2, "b"}, {3, "c"}, {4, "d"}};
    // add elements
    students[5] = "e";

    //add element(using insert method)
    students.insert(make_pair(6, "f"));
    
    map<int, string>::iterator iter;

    //Erasing elements
    // students.erase(1);

    // Using iterator

    for(iter = students.begin(); iter != students.end(); iter++){
        students.erase(iter);
        // cout << iter->first << "  " << iter->second << endl;
    }

    if(students.empty()) cout << "empty";

    for(iter = students.begin(); iter != students.end(); iter++){
        cout << iter->first << "  " << iter->second << endl;
    }



}