#include <iostream>
using namespace std;

// Prime no hai ya ni oska code:
// e.g:- aghr meny 6 ko check krna hai k wo prime h ya ni tu m 2 sy 5 tk check krogi....
bool Prime(int n){
    if(n <= 1)
        return false;
    for(int i = 2; i < n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

// Factorial of a number:
int Factorial(int n=3){
    int ans = 1;
    for(int i = 1; i <= n; i++){
        ans *= i;
    }
    return ans;
}

int main(){
    int a, b;
    cout << "Enter first number: " << endl;
    cin >> a;
    cout << "Enter second number: " << endl;
    cin >> b;

    // call func with default parameter:
    cout << Factorial() << endl;
    // A is prime or not:
    cout << Prime(a) << endl;
    // A ka factorial:
    cout << Factorial(a) << endl;
    // B is prime or not:
    cout << Prime(b) << endl;
    // B ka factorial:
    cout << Factorial(b) << endl;
    // B-A is prime or not:
    cout << Prime(b - a) << endl;
    // B-A ka factorial:
    cout << Factorial(b - a) << endl;
}