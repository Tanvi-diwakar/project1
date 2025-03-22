//uppercase lowercase alphabet

#include<iostream>
using namespace std;

int main() {
    char ch;
    cout << "enter the alphabet : ";
    cin >> ch;

    if(ch>='a' && ch<='z') {
        cout << "alphabet is lower case" << endl;
    }
    else{
        cout << "alphabet is upper case" << endl;
    }
    return 0;
}