#include <iostream>
#include <vector>
using namespace std;
// User function template for C++
class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        // code here
        int n = arr.size()+1;
        // sum of all elements in an array...
        long long sum = 0;
        for(int i = 0; i<arr.size(); i++){
            sum += arr[i];
        }
        
        // sum of n numbers...
        
        long long ans = (1LL*n*(n+1))/2;
        return ans-sum;
    }
};


