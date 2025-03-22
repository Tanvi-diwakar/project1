// sum of odd numbers 

#include<iostream>
using namespace std;

int main(){
    int n;
    int sum=0;
    cout << "enter the number" << endl;
    cin >> n;

    for (int i=1;i<=n;i++) {
    if (i%2 != 0){
        sum+=i;
    }
    }
    cout << "sum = " << sum <<endl;
    return 0;
}