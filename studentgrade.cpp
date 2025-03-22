// student grading 

#include<iostream>
using namespace std;

int main(){
    int marks;
    cout << "enter marks" << endl;
    cin >> marks;

    if(marks>=90) {
        cout << "A+ grade" << endl;
    }
    else if(marks>=80 && marks<90) {
        cout << "A grade" << endl;
    }
    else if(marks>=60 && marks<80) {
        cout << "B grade" << endl;
    }
    else if(marks>=45 && marks<60) {
        cout << "C grade" << endl;
    }
    else {
        cout << "you should apply for exam again" << endl;
    }
    return 0;
}