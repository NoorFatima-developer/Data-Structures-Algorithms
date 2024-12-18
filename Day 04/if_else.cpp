#include <iostream>
using namespace std;


// Example 01:

// int main() {
//     int package;
//     cout << "Enter your Package: ";
//     cin >> package;

//     if(package > 10){
//         cout << "Accepted";
//     }
//     else{
//         cout << "Rejected";
//     }
// }

// Example 02:

// int main(){
//     int a, b;
//     cout << "Enter your first Number: ";
//     cin >> a;

//     cout << "Enter your second Number: ";
//     cin >> b;

//     if(a>b){
//         cout << a << " is greater than " << b;
//     }

//     else {
//         cout << a << " is less than " << b;
//     }
// }

// Example 03:

int main(){
    int number;
    cout << "Enter your first Number: ";
    cin >> number;

    if(number%2 == 0){
        cout << number << " is an even number";
    }else{
        cout << number << " is an odd number";
    }

}