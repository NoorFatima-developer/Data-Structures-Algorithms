#include <iostream>
using namespace std;

        int main() {
            int x;
            cout << "Enter a number: ";
            cin >> x;
            int ans=0, rem;
            while (x != 0) {
                rem = x % 10;
                x/= 10;
                // overflow +ve and -ve nums klye:
                if(ans > INT_MAX/10 || ans < INT_MIN/10)
                return 0;
                ans = ans*10+rem;
            }
            cout << "Sum of digits: " << ans << endl;
};