#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};       //int stores 4 bytes

    // array 5 stores total 20bytes..

    cout << sizeof(arr) << endl;

    // size of array find krny klye...
    cout << sizeof(arr)/sizeof(arr[0]) <<" ";   //20/4 -->//output = 5;
    cout << endl;
    // ab int 4 bytes store krta hai ye kesy pta chlyga..
    int b;
    cout << sizeof(b) <<" ";              //output = 4;
}