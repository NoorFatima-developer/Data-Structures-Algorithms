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

// int main(){

//     int row, col;

//     for(row=1; row<=4; row++){
//         for(col=1; col<=5; col++){
//             cout << "10" << " ";
//         }
//         cout << endl;  // New line after each row
//     }
// }

// Q-03 Print

// 1 1 1 1 1 
// 2 2 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4
// 5 5 5 5 5

// int main(){
//     int row, col;

//     for(row=1; row<=5; row++){
//     for(col=1; col<=5; col++){
//         cout << row << " ";
//     }
//     cout << endl;  // New line after each row
// }
// }

// Q-04 Print

// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

// int main(){
//     int row, col;

//     for(row=1; row<=5; row++){
//     for(col=1; col<=5; col++){
//         cout << col << " ";
//     }
//     cout << endl;  // New line after each row
// }
// }

// Q-05 Print

// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1

// int main(){
//     int row, col;

//     for(row=1; row<=5; row++){
//     for(col=5; col>=1; col--){
//         cout << col << " ";
//     }
//     cout << endl;  // New line after each row
// }
// }

// Q-06 Print

// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25


// int main(){
//     int row, col;

//     for(row=1; row<=5; row++){
//     for(col=1; col<=5; col++){
//         cout << col*col << " ";
//     }
//     cout << endl;  // New line after each row
// }
// }

// 07 Print:
// 1 8 27 64 125
// 1 8 27 64 125
// 1 8 27 64 125
// 1 8 27 64 125
// 1 8 27 64 125

int main(){
    int row, col;

    for(row=1; row<=5; row++){
    for(col=1; col<=5; col++){
        cout << col*col*col << " ";
    }
    cout << endl;  // New line after each row
}
}