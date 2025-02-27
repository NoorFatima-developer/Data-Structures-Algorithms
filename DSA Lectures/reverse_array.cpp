#include <iostream>
using namespace std;

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int start = 0, end = 5;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    int i = 0;
    while(i<6){
        cout << arr[i] << " ";
        i++;
    }
}