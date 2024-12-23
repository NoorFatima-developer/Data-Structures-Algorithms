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

// Example 05:(Print Table of 6 by using loop but start from 6 and ends at 60)

// int main(){
//     int i;
//     for(i=6; i<=60; i=i+6){
//         cout << i << " ";
//     }
// }


// Example 05:(Print Table of 6 by using loop with multiplication method...)

// int main(){
//     int n;
//     n = 8;
//     for(int i = 1; i<=10; i++){
//         cout <<  n << " * "  << i <<  " = "  << n * i << endl;
//     }
// }

//Example 05:(Print Table of 6 by using loop but result will be in n)

// int main(){
//     int n = 8;
//     for(int i = n; i<=10*n; i=i+n){
//         cout << i << " ";
//     }
// }

// Example 05:(Print Any Number Table)

// int main(){
//     int n, i;
//     cout << "Enter the Number: ";
//     cin >> n;

//     for(i = 1; i<=10; i++){
//         cout <<  n << " * "  << i <<  " = "  << n * i << endl;
//     }
// }


// Example 06:(Print power of any number result...)

// int main(){
//     int i, n, pow, num;
//     cout << "Enter the Number: ";
//     cin >> n;

//     cout << "Enter the Power: ";
//     cin >> pow;

//     // store n in variable...

//     num = n;
//     for(i=1; i<pow; i++){
//        num = num * n;
//     }

//     cout << "Result: " << num << endl;
// }

// Example 07:(Print Sum of Natural Numbers....)

int main(){
    int i, n, sum=0;

    for(i = 1; i<=6; i++){
        sum = sum + i;
    }

    cout << "Sum: " << sum << endl;
}