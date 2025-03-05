#include <iostream>
using namespace std;

// Sort numbers in ascending order..

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

// Sort numbers in descending order..

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
            if(arr[index] < arr[j]){
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



// Second way of sorting ...largest num ko end pr lek jana hai...

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) { 
        cin >> arr[i];  
    }

    for(int i = n-1; i>=0; i--){
        int index = i;

        for(int j = 0; j < i; j++){
            if(arr[index] < arr[j]){
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }


    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr; 
    return 0;
}