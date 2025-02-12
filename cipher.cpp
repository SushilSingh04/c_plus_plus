#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string cipher(string text)
{
    string alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string key =   "XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr";

    string cipher;
    for (auto c : text)
    {
        if (isalpha(c))
        {
            int posInAlpha = alpha.find(c);
            cipher += key.at(posInAlpha);
        }
        else{
            cipher += c;
        }
    }

    return cipher;
}

string decipher(string cipher){
    
}

int main()
{
    string text = "I'll";
    // getline(cin, text);
    cout << cipher(text);
}