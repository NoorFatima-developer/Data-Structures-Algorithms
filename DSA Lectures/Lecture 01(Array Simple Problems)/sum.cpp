// 1: Take 5 elements from user input and find its sum with the help of an array.

#include <iostream>
using namespace std;

int main(){
    int arr [5];
    int sum = 0;
    cout << "Enter 5 numbers:\n";
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    cout << "Sum of entered numbers is:\n";
    for(int i = 0; i < 5; i++){
        sum += arr[i];
    }
    cout << sum << " ";
}