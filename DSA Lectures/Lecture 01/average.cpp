#include <iostream>
using namespace std;

// Calculate the average of elements in an array of size 18.

int main(){
    int arr [5];
    int sum = 0;
    int n = 5;
    cout << "Enter 5 numbers:\n";
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    cout << "Sum of entered numbers is:\n";
    for(int i = 0; i < 5; i++){
        sum += arr[i];
    }

    // Displaying the average:
    cout << "Average: " << (float)sum / n << endl;
}