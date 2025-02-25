//Find the index of a specific element in an array, if the element is not present, print -1. Ask the size of the array from the user and then implement it.

// Problem ye h k lineearly array m sy elements ko search krna hai
// aghr tu element mil gya array m sy tu bata do k kis iteration pr mila hai or print krdo
// elemnt ko aghr ni mila tu bata do k element not found..


// problem ye hai k linearly elements ko array mai search krna hai
// and aghr tu element array mai mil jta hai yani arr[i] == searchElement k tu jis index pr hoa hai na
// yani jis iteration pr hoa h na index m oskp store krdo
// or phr print wala kam krdo..

#include <iostream>
using namespace std;

int main(){
    int size, searchElement;
    cout << "Enter the size of the array: ";
    cin >> size;

    // it will not work:
    // int arr[size];
    // Dynamically allocate memory:
    int* arr = new int[size];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    // Ask user which element do you wanna search....
    cout << "Enter the element to search: ";
    cin >> searchElement;

    int index = -1;
    for(int i = 0; i < size; i++){
        if(arr[i] == searchElement){
            index = i;
            break;
        }
    }

    // Print result:

    if(index == -1){
        cout << "Element not found!";
    }else {
        cout << "Element found at index: " << index;
    }

    //Free allocated memory to prevent memory leaks
    delete[] arr;  
    return 0;
}