#include <iostream>
using namespace std;

// Q-1 Print 
// * * * * *
// * * * * *
// * * * * *
// * * * * *

// int main(){

//     int row, col;

//     for(row=1; row<=5; row++){
//         for(col=1; col<=5; col++){
//             cout << "* ";
//         }
//         cout << endl;  // New line after each row
//     }
// }


// Q-02 Print 
// 10 10 10 10 10 
// 10 10 10 10 10
// 10 10 10 10 10
// 10 10 10 10 10

int main(){

    int row, col;

    for(row=1; row<=4; row++){
        for(col=1; col<=5; col++){
            cout << "10" << " ";
        }
        cout << endl;  // New line after each row
    }
}