    #include <iostream>
    using namespace std;
    // way 01..
    class Solution {
        public:
            int mySqrt(int x) {                
                int i = 1;
                int sqrt = 0;
                while (i <= x / i) {
                    sqrt = i;
                    i++;
                }
                return sqrt;
            }
        };
    
        // way 02 ..
        // class Solution {
        // public:
        //     int mySqrt(int x) {
        //         float square;
        //         square = sqrt(x);
        //         return square;
        // }
        // };