#include <iostream>
using namespace std;

//Learn Switch:

// Switch can be apply on int as well as char..

int main(){
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice){
        case 1:
            cout << "You chose 1" << endl;
            break;
        case 2:
            cout << "You chose 2" << endl;
            break;
        case 3:
            cout << "You chose 3" << endl;
            break;
        default:
            cout << "Invalid Choice" << endl;
    }
}