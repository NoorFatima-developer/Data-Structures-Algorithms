#include <iostream>
using namespace std;

// // Q-1 Print 
// // * * * * *
// // * * * * *
// // * * * * *
// // * * * * *

// int main(){

//     int row, col;

//     for(row=1; row<=5; row++){
//         for(col=1; col<=5; col++){
//             cout << "* ";
//         }
//         cout << endl;  // New line after each row
//     }
// }


// // Q-02 Print 
// // 10 10 10 10 10 
// // 10 10 10 10 10
// // 10 10 10 10 10
// // 10 10 10 10 10

// int main(){

//     int row, col;

//     for(row=1; row<=4; row++){
//         for(col=1; col<=5; col++){
//             cout << "10" << " ";
//         }
//         cout << endl;  // New line after each row
//     }
// }

// // Q-03 Print

// // 1 1 1 1 1 
// // 2 2 2 2 2
// // 3 3 3 3 3
// // 4 4 4 4 4
// // 5 5 5 5 5

// int main(){
//     int row, col;

//     for(row=1; row<=5; row++){
//     for(col=1; col<=5; col++){
//         cout << row << " ";
//     }
//     cout << endl;  // New line after each row
// }
// }

// // Q-04 Print

// // 1 2 3 4 5
// // 1 2 3 4 5
// // 1 2 3 4 5
// // 1 2 3 4 5
// // 1 2 3 4 5

// int main(){
//     int row, col;

//     for(row=1; row<=5; row++){
//     for(col=1; col<=5; col++){
//         cout << col << " ";
//     }
//     cout << endl;  // New line after each row
// }
// }

// // Q-05 Print

// // 5 4 3 2 1
// // 5 4 3 2 1
// // 5 4 3 2 1
// // 5 4 3 2 1
// // 5 4 3 2 1


// int main(){
//     int row, col;

//     for(row=1; row<=5; row++){
//     for(col=5; col>=1; col--){
//         cout << col << " ";
//     }
//     cout << endl;  // New line after each row
// }
// }

// // Q-06 Print

// // 1 4 9 16 25
// // 1 4 9 16 25
// // 1 4 9 16 25
// // 1 4 9 16 25
// // 1 4 9 16 25


// int main(){
//     int row, col;

//     for(row=1; row<=5; row++){
//     for(col=1; col<=5; col++){
//         cout << col*col << " ";
//     }
//     cout << endl;  // New line after each row
// }
// }

// // Q-07 Print:
// // 1 8 27 64 125
// // 1 8 27 64 125
// // 1 8 27 64 125
// // 1 8 27 64 125
// // 1 8 27 64 125

// int main(){
//     int row, col;

//     for(row=1; row<=5; row++){
//     for(col=1; col<=5; col++){
//         cout << col*col*col << " ";
//     }
//     cout << endl;  // New line after each row
// }
// }

// // Q-08 Print:
// // a a a a a
// // b b b b b
// // c c c c c
// // d d d d d
// // e e e e e 

// int main(){
//     int row, col;

//     for(row=1; row<=5; row++)
//     {
//      char a = 'a' + row-1;
//      for(col=1; col<=5; col++){
//         cout << a << " ";
//     }
//     cout << endl;  // New line after each row
// }
// }

// // Q-09 Print:(same a's b's so on col wise hain, islye i will use col-1..)---Way 01..
// // a b c d e
// // a b c d e
// // a b c d e
// // a b c d e
// // a b c d e

// int main(){
//     int row, col;
//       for(row=1; row<=5; row++)
//     {
//      for(col=1; col<=5; col++){
//      char a = 'a' + col-1;
//         cout << a << " ";
//     }
//     cout << endl;  // New line after each row
// }
// }

// // Q-09 Print:(same a's b's so on col wise hain, islye i will write code in col...)---Way 02..
// // a b c d e
// // a b c d e
// // a b c d e
// // a b c d e
// // a b c d e

// int main(){
//     int row;
//     for(row=1; row<=5; row++){
//         for(char col = 'a'; col<='e'; col++){
//             cout << col << " ";
//     }
//     cout << endl;  // New line after each row
// }
// }

// // Q-10 Print:--- 1 way:(with variable)

// // 1 2 3 4 5
// // 6 7 8 9 10
// // 11 12 13 14 15
// // 16 17 18 19 20
// // 21 22 23 24 25

// int main(){
//     int row, col;
//     int count = 1;
//     for(row=1; row<=5; row++){
//         for(col=1; col<=5; col++){
//             cout << count << " ";
//             count++;
//     }
//     cout << endl;  // New line after each row
// }
// }


// // Q-10 Print:---2 way..(without variable)

// // 1 2 3 4 5
// // 6 7 8 9 10
// // 11 12 13 14 15
// // 16 17 18 19 20
// // 21 22 23 24 25

int main(){
    int row, col;
    for(row=1; row<=5; row++){
        for(col=1; col<=5; col++){
            cout << (row -1)*5 + col << " ";
    }
    cout << endl;  // New line after each row
}
}



// // Summary of Patterns:

// // Aghr 1 value ko sary patterns mai print krwana ho then mai oss value ko cout mai dedogi..
// // jismai same values hain osko print krwa do..
// // Aghr row mai same hai tu row wise print krwa do..
// // Aghr col mai same hai tu col wise print krwa do..
// // Aghr reverse order mai values jarae hain tu loop ko b reverse krdo.. lkin dekh k row mai same hain tu rows mai or aghr col mai 
// // same hain tu cols mai...