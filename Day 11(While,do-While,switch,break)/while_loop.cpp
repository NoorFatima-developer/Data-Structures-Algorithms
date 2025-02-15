
#include <iostream>
using namespace std;

// Print even numbers using while-loop...(Way 01)
// Print even numbers using while-loop...(Way 02)
// Print odd numbers using while-loop...
// Print Table of any number by using while-loop...


// Print even numbers using while-loop...(Way 01)

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


// Print even numbers using while-loop...(Way 02)
 
// int main(){
//     int n;
//     cout << "Enter the Number: ";
//     cin >> n;

//     int i = 1;

//     while(i <= n){
//         if(i % 2 == 0){
//             cout << i << " ";
//         }
//         i += 1;
//     }
// }

// Print odd numbers using while-loop...

// int main(){
//     int n;
//     cout << "Enter the Number: ";
//     cin >> n;

//     int i = 1;

//     while(i <= n){
//         if(i % 2 == 1){
//             cout << i << " ";
//         }
//         i += 1;
//     }
// }


// Print Table of any number by using while-loop...
int main() {
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    int i = 1;
    while(i <= n) {
       cout << n << " * " << i << " = " << n*i <<  endl;
       i++;
    }

    return 0;
}
