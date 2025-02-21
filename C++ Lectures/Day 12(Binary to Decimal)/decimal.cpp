#include <iostream>
using namespace std;

// Mai koi b binary ko decimal number mai convert krskti hon by using this below formula:
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int remainder;
    int i = 1;
    int ans = 0;

    while(num){

        // remainder update:
        remainder = num % 10;

        // quotient update:
        num/=10;
        // isko essy b likh skty hain..
        // num =  num / 2;
      
        // ans update:
        // ans = remainder * i + ans;
        // isko b essy likh skti hon..
        ans+= remainder * i;

        // multipy update:
        i*= 2;
        // essy b likh skti hon..
        // i = i * 2;
    }
    cout << ans << " ";
}