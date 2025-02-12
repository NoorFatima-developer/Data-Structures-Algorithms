#include <iostream>
using namespace std;

int main(){
    // jiski presence bri hogi wo hi output mai ayega..
    cout << 15/2 << endl;       //output = 7;(int h tu int hi..)
    cout << 15.0/2 << endl;  //output = 7.5;(float h tu float)
    cout << 15.0/2.0 << endl; //output = 7.5;(float h tu float)

    // post increment..
    int a = 10;
    cout << a++ << endl; // output = 10
    cout << a << endl;   // output = 11
}