#include <iostream>
using namespace std;


// Example 01:
// int main(){
//     for(char name = 'a'; name<='z'; name=name+1)
//     {
//         cout << name << " ";
//     }
// }

// Example 02:(Number starts from 10)

// int main(){
//     for(int i = 10; i>=1; i--){
//         cout << i << " ";
//     }
// }

// Example 03:(Number starts from n(n means jo number user enter kryga wahan sy 1 tk krwany hain print Numbers...))

// int main(){
//     int n;
//     cout << "Enter the Number: ";
//     cin >> n;

//     for(int i = n; i>=1; i--){
//         cout << i << " ";
//     }
// }


// Example 04:(3 3 numbers ka gap ana chahye and 100 include ni hona chahye...)

// int main(){
//     int n;
//     for(n=1; n<100; n=n+3){
//         cout << n << " ";
//     }
// }

// Example 05:(Print Table of 6 by using loop)

int main(){
    int n;
    n = 6;
    for(int i = 1; i<=10; i++){
        cout <<  n << " * "  << i <<  " = "  << n * i << endl;
    }
}