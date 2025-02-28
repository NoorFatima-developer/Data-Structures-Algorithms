#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr = new int[n];
    // ya simple use:
    // int arr[1000];

    // in fibonacci series 
    // first = 0
    // second = 1

    arr[0] = 0;
    arr[1] = 1;

    for(int i = 2; i <= n; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }

    cout << arr[n-1] << " ";
}