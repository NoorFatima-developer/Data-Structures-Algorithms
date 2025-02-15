#include <iostream>
using namespace std;

// Print Sum of n numbers...

int main(){
    int n, i, sum=0;
    cout << "Enter the Number: ";
    cin >> n;


    do{
        sum = sum + i;
        i++;
    }while(i < n);
}