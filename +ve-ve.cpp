//number is negative or positive

#include<iostream>
using namespace std;
 
int main() {
    int n;
    cout << "enter the number" << endl;
    cin >> n;

    if(n>=0) {
        cout << "the number is positive" << endl;
    }
    else{
        cout << "the number is negative" << endl;
    }
    return 0;
}