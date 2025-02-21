#include <iostream>
using namespace std;

// way 01---> division method:
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // 0 or -ve values 2 ki power k result mai nahi atien so;
    if (n < 1)
        cout << "Please enter a valid number: ";
    // return 0;
    // jbtk n 1 na o jye tbtk divide krty rho..
    while (n!=1)
    // while(n%2 == 0)
    // lkin ye condition bs 2 ya 4 klye chlygi
    // while(n/2 == 1)
    {
        if (n % 2 == 1)
        {
            cout << "This number is not the power of 2";
            // return 0;
        }
        n /=2;
    }
        cout << n;
};

// way 02
// Iterative method:

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n < 1){
        cout << "Please enter a valid number: ";
    }
    int ans = 1; //because 2^0 -> 1
    while(ans < n){
        ans = ans * 2;
    }

    if(ans == n){
        cout << n << " is a power of 2";
    }
    else{
        cout << n << " is not a power of 2";
    }
    return 0;

}