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
        cout << "Sum: " << sum << endl;
    }while(i < n);
}