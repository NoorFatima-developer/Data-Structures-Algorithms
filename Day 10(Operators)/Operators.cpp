#include <iostream>
using namespace std;
// 01----------Arithmetic operations:(unary operators includes pre and post increment and decrement...(++, --) and binary operators(*, /, %) and(+, -))

// i-Unary operator:
int main(){
    // jiski presence bri hogi wo hi output mai ayega..
    cout << 15/2 << endl;       //output = 7;(int h tu int hi..)
    cout << 15.0/2 << endl;  //output = 7.5;(float h tu float)
    cout << 15.0/2.0 << endl; //output = 7.5;(float h tu float)

    // post increment..
    int a = 10;
    cout << a++ << endl; // output = 10
    cout << a << endl;   // output = 11
    // pre decrement..
    int b = 10;
    cout << --b << endl; // output = 9
    cout << b << endl;   // output = 9

// 02----Comparison Operators:(==, >, <, >=, <=, !=)
// if a == b, means a == 6; answer is no.. means 0....
// and aghr answer yes m o ga tu answer will be 1...


// 5 > 4 > 3  --->answer is no..
// because 5 > 4 (true) means 1 > 3 (false)-->0,,


// 03-----Logical Operators:(&&, ||, !)

int a, b, c;
cin>> a >> b >> c;

if(a>b&&a>c){
    cout << "yes";
}
else {
    cout << "no";
}
}

