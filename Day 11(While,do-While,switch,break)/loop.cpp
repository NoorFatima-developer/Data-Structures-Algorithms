// Print Table of 8 by using while-loop...

#include <iostream>
using namespace std;

int main() {
    int n = 8;
    int i = 1;

    while(i <= 10*n) {
        cout << i << " ";
        i += n;
    }

    return 0;
}