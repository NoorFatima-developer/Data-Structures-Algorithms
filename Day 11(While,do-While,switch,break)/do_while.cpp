#include <iostream>
using namespace std;

// Print Sum of n numbers...

int main(){
    int n; 
    cout << "Enter the Number: ";
    cin >> n;
    int i = 1, sum=0;
    do{
        sum = sum + i;
        i++;
    }while(i < n);
    cout << "Sum: " << sum << endl;
    return 0;

}

