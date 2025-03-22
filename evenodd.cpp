//weather the number is even or odd

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the number" << endl;
    cin >> n;

    if(n%2==0){
        cout << "the number is even" << endl;
    }
    else{
        cout << "the number is odd" << endl;
    }
    return 0;
}