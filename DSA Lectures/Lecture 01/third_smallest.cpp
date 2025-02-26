#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int smallest = INT_MAX;
    int secondsmallest = INT_MAX;
    int thirdsmallest = INT_MAX;


    for(int i = 0; i < size; i++){
        if(arr[i] < smallest){
            thirdsmallest = secondsmallest;
            secondsmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondsmallest && arr[i] != smallest){
            thirdsmallest = secondsmallest;
            secondsmallest = arr[i];
        }
        else if(arr[i] < thirdsmallest && arr[i] != smallest && arr[i] != secondsmallest){
            thirdsmallest = arr[i];
        }
    }
    delete[] arr;
    cout << "The third smallest element is: " << thirdsmallest << endl;
}