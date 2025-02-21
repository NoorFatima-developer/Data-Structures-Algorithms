#include <iostream>
using namespace std;

// Mai koi b decimal number ko binary mai convert krskti hon by uring this below formula:
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int remainder;
    int i = 1;
    int ans = 0;

    while(num > 0){

        // remainder update:
        remainder = num % 2;
        // Bitwise operator mai remainder formula:
        // remainder ko hum bitwise sy b krskty hain oss sy b 1 hi ayega..
        // remainder = num&1;

        // quotient update:
        num/=2;
        // isko essy b likh skty hain..
        // num =  num / 2;

        // Bitwise operator mai quotient formula:
        //  and isko bitwise operator sy b likh skty hain..
        num =  num >> 1;
      
        // ans update:
        // ans = remainder * i + ans;
        // isko b essy likh skti hon..
        ans+= remainder * i;

        // multipy update:
        i*= 10;
        // essy b likh skti hon..
        // i = i * 10;
    }
    cout << ans << " ";
}