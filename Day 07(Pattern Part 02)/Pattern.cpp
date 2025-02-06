// Is trhan k tree patterns mai row tk length rkhni hai col ki...

// Q-11 

//  *
//  * *
//  * * *
//  * * * *
//  * * * * *

#include <iostream>
using namespace std;

// int main() {
//     for(int row = 1; row <=5; row++) {
//         for(int col = 1; col <=row; col++) {
//             cout << " * ";
//         }
//         cout << endl;
//     }
// }

// Q-12 
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// int main(){
//     for(int row = 1; row <=5; row++) {
//         for(int col = 1; col <=row; col++) {
//             if(col <= row)
//                 cout << col << " " ;
//         }
//         cout << endl;  // New line after each row
//     }
// }

// Q-13
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

// int main(){
//     for(int row = 1; row <= 5; row++){
//         for(int col = 1; col <= row; col++ ){
//             cout << row << " ";
//         }
//         cout << endl;  // New line after each row
//     }
// }

// Q-14
// 1 
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

// int main(){
//     for(int row = 1; row <= 5; row++){
//         for(int col = row; col >=1; col--){
//             cout << col << " ";
//         }
//         cout << endl;  // New line after each row
//     }
// }

// Q-15
// a 
// b b
// c c c
// d d d d
// e e e e e
int main(){
    for(int row = 1; row <= 5; row++){
        // row tk hi condition lgygi..
        char name = 'a' + (row - 1);
        for(int col = 1; col <= row; col++){
            cout << name << " ";
        }
        cout << endl;  // New line after each rowx        
    }
}