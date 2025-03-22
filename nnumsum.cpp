// sum of n numbers using for loop

#include<iostream>
using namespace std;

int main() {
    int n;
    int sum=0;
    cout << "enter the number : " << endl;
    cin >> n;

    for (int i=1;i<=n;i++) {
        sum+=i;
    }
    cout <<"sum of all numbers is : " << sum << endl;
    return 0;
}