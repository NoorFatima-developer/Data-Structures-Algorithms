#include <iostream>
#include <cmath>
using namespace std;

// count digits...
int countdigit(int num) {
    int count = 0;
    while (num!=0) {
        num /= 10;
        count++;
    }
    return count;
}

// armstrong number...
bool Armstrong(int num, int digit){
    int n = num, rem, ans = 0;
    while(n!=0) {
        rem = n % 10;
        n /= 10;
        ans = ans + pow(rem, digit);
    }
    
    if(ans == num)
    return true;
    else
    return false;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    // Count digit...
    int digit = countdigit(num);
    // ArmStrong number...
    cout << Armstrong(num, digit) << endl;
}