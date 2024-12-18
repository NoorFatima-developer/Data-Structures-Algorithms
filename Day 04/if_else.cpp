#include <iostream>
using namespace std;

int main() {
    int package;
    cout << "Enter your Package: ";
    cin >> package;

    if(package > 10){
        cout << "Accepted";
    }
    else{
        cout << "Rejected";
    }
}