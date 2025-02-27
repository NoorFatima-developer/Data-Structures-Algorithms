#include <iostream>
using namespace std;

// int main(){
//     int arr[6] = {1,2,3,4,5,6};
//     int start = 0, end = 5;

//     while(start < end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }

//     int i = 0;
//     while(i<6){
//         cout << arr[i] << " ";
//         i++;
//     }
// }

#include <iostream>
using namespace std;

// using with another array...
int main(){
    int arr1[6] = {1,2,3,4,5,6};
    int arr2[6];
    int i = 5;
    int j = 0;
    
    // logic to reverse...by creating new array....
    while(i >= 0){
        arr2[j] = arr1[i];
        j = j + 1;
        i = i - 1;
    }

    // copy arr2 to arr1...(i ka nam dedo ya j ka 1 e bt hai)
    for(int j = 0; j <= 6; j++){
        arr1[j] = arr2[j];
    }
    
    // print arr1...
    for(int i = 0; i < 6; i++){
        cout << arr1[i] << " ";
    }

    return 0;
 
}

