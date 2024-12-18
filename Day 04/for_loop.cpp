#include <iostream>
using namespace std;


// Without loop b print o jyega but mehnat zada so will use for-loop:
// int main(){
//     cout << " Coder Army\n";
//     cout << " Coder Army\n";
//     cout << " Coder Army\n";
//     cout << " Coder Army\n";
//     cout << " Coder Army\n";
// }

// Example 01:

// int main(){
//     // Ab i int type ka hai islye int likhna imp hai...
//     for(int i = 0; i < 5; i++){
//         cout << " Coder Army\n";
//     }
// }

// Example 02:(Print square of numbers)

// int main(){

//     int n;
//     cout << "Enter the Number: ";
//     cin >> n;

//     for(int i = 1; i < n; i = i+1 ){
//         cout << i << " " << "^ 2 = " << i*i << endl;
//     }
// }

// Example 03:(Print all Even Numbers)

int main(){

    int n;
    cout << "Enter Even Numbers: ";
    cin >> n;

    for(int n = 2; n <= 10; n = n+2){
        cout << n << " ";
    }
}