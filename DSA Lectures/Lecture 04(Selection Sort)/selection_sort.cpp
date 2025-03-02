#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) { 
        cin >> arr[i];  
    }

    for(int i = 0; i<n; i++){
        int index = i;

        for(int j = i + 1; j < n; j++){
            if(arr[index] > arr[j]){
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
    
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}