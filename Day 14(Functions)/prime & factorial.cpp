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
int factorial(int n){
    int ans = 1;
    for(int i = 1; i <= n; i++){
        ans *= i;
    }
    return ans;
}

int main(){
    int a, b;
    cout << "Enter numbers: ";
    cin >> a >> b;

    // A is prime or not:
    // A ka factorial:
    // B is prime or not:
    // B ka factorial:
    // B-A is prime or not:
    // B-A ka factorial:

}