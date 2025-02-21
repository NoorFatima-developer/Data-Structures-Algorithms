#include <iostream>
using namespace std;

class Solution {
    public:
      int trailingZeroes(int n) {
          // Write Your Code here
          int ans = 0;
          while(n>=5){
              // divide k bd sary nums ka sum b krna tha islye meny ans mai + krlea..
              ans = ans + n/5;
              n = n/5;
          }
          return ans;
      }
  };