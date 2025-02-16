#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // 0 or -ve values 2 ki power k result mai nahi atien so;
    if (n < 1)
        cout << "Please enter a valid number: ";
    // return 0;
    while (n!=1)
    {
        if (n % 2 == 1)
        {
            cout << "This number is not the power of 2";
            // return 0;
        }
        n /=2;
    }
        cout << "1";
};
