#include <iostream>
using namespace std;

// Q-NO-01:
// Formula: 1 sy 2*row-1 tk..

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

// int main(){
//     int row;
//     int col;
//     int n;
    
//     cout << "Enter the Input: ";
//     cin >> n;

//     for(int row=1; row<=n; row++){
//         // For space:(1 sy n-row tk)
//         for(int col=1; col<=n-row; col++){
//             cout << "  ";
//         }
//         // For num:(1 sy row tk)
//         for(int col=1; col<=row; col++){
//             cout << col <<" ";
//         }
//         // For decrement(row-1 sy 1 tk..) where row ends...
//         for(int col=row-1; col>=1; col--){
//             cout << col <<" ";
//     }
//         cout << endl;
//     }
// }

// Q-NO-03:

int main(){
    int row;
    int col;
    int n;
    
    cout << "Enter the Input: ";
    cin >> n;

    for(int row = 1; row <= n; ++row){
        for(int col = 1; col <= n - row; ++col){
            cout << " ";
        }
        for(int col = 5; col >= 2 * row - 1; ++col){
            cout << "*";
        }
        cout << endl;
    }
}