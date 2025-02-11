#include <iostream>
using namespace std;

// Q-NO-01:

//      *
//     ***
//    *****
//   *******
//  *********
// ***********

// int main(){
//     int row;
//     int col;
//     int n;
    
//     cout << "Enter the Input: ";
//     cin >> n;

//     for(int row = 1; row <= n; ++row){
//         for(int col = 1; col <= n - row; ++col){
//             cout << " ";
//         }
//         for(int col = 1; col <= 2 * row - 1; ++col){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// Q-NO-02:

int main(){
    int row;
    int col;
    int n;
    
    cout << "Enter the Input: ";
    cin >> n;

    for(int row=1; row<=n; row++){
        // For space:
        for(int col=1; col<=n-row; col++){
            cout << " ";
        }
        // For *
        for(int col=1; col<=row; col++){
            cout << "*";
        }
        // For decrement where row ends...
        for(int col=1; col>=row; col--){

        }
        cout << endl;
    }
}