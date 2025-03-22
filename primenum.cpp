// weather number is prime or non prime 

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the number" << endl;
    cin >> n;
    bool isprime = true;

    for (int i=2 ;i<=n-1 ;i++) {
        if (n%1 == 0) {
            isprime=false;
            break;
        }
    }
    if (isprime == true) {
        cout << "prime number \n";
    }
    else{
        cout << "non prime number \n";
    }
    return 0;
}