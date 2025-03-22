// print numbers using do while loop 

#include<iostream>
using namespace std;

int main(){
    int n;
    int i=1;
    cout << "enter the number" << endl;
    cin >> n;

    do{
        cout << i << " " ;
        i++;
    } 
    while (i<=n);
    cout << endl;
    return 0;
}