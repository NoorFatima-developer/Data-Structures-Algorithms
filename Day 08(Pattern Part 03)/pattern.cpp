// Inn patterns mai jahan space b print krni hain or num ya * b tu i will use
// condition mai 1 sy num-row tk inner for loop mai condition lgy gi..;

#include <iostream>
using namespace std;

// Q-01
//                 *
//               * *
//             * * *
//           * * * *
//         * * * * *
//       * * * * * *
//     * * * * * * *
//   * * * * * * * *
// * * * * * * * * *

// int main(){

//     // user sy input leny klye...
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     for(int row=1; row<=num; row++){
//         // print space...
//         for(int col=1; col<=num-row; col++){
//             cout<<"  ";
//         }
//         for(int col=1; col<=row; col++){
//             // print star...
//             cout<<"* " ;
//         }
//         cout << endl;
        
//     }
// }

// Q-02

//      1
//     2 2
//   3 3 3
// 4 4 4 4

// int main(){
//     // user sy input leny klye...
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     for(int row=1; row<=num; row++){
//         for(int col=1; col<=num-row; col++){
//             // print star...
//             cout<<"  ";
//         }
//         for(int col=1; col<=row; col++){
//             // print numbers...
//             cout<< row << " ";
//         }
//         cout << endl;

//     }
// }

// Q-03

int main(){
     // user sy input leny klye...
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for(int row=1; row<=num; row++){
        for(int col=1; col<=num-row; col++){
            cout<< "  " ;
        }

         for(int col=1; col<=row; col++){
             cout << col << " ";
         }
         cout << endl;

    }
}