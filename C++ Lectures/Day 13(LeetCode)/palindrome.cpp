#include <iostream>
using namespace std;

class Solution {
    public:
        bool isPalindrome(int x) {
            int ans = 0;
            // original quotient value ko save krany klye meny isko num mai save kea
            // h ta k last mai compare krskon..
            int num = x;
            int rem;
    
            if (x < 0)
                return 0;
    
            while (num) {
                rem = num % 10;
                num /= 10;
                if (ans > INT_MAX / 10)
                    return 0;
                ans = ans * 10 + rem;
            }
    
            if (ans == x)
                return 1;
            else
                return 0;
        }
    };