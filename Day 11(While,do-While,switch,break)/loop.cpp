
#include <iostream>
using namespace std;


// Print Table of 8 by using while-loop...
// int main() {
//     int n = 8;
//     int i = 1;

//     while(i <= 10) {
//        cout << n*i <<  endl;
//        i++;
//     }

//     return 0;
// }

// Print even numbers using while-loop...

// int main(){
//     int n;
//     cout << "Enter the Number: ";
//     cin >> n;

//     int i = 2;
//     while(i <= n){
//         cout << i << " ";
//         i += 2;
//     }
// }


// Print odd numbers using while-loop...

int main(){
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    int i = 1;
    while(i <= n){
        if(i/n){
        cout << i << " ";
        i += 1;
    }
}
}