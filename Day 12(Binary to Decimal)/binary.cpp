#include <iostream>
using namespace std;

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
        // quotient update:
        num =  num / 2;
        // ans update:
        ans = remainder * i + ans;
        // multipy update:
        i*= 10;
        // essy b likh skti hon..
        // i = i * 10;
    }
    cout << ans << " ";
}