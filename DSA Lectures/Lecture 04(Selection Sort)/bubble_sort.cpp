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

    int swapped = 0;
    // n = aghr 5 hai tu rounds n -1 hongy and bubbles n - 2 bnygy...
    for(int i = n-2; i >= 0; i--){  //n-2 islye likha hai ku k n-2 bubbles bn re hain 1 round mai...
        for(int j = 0; j <=i; j++){
            if(arr[j] > arr[j+1]){
                swapped = 1;
                swap(arr[j], arr[j+1]);
            }
            if(swapped == 0){
                break;
            }
    }
}