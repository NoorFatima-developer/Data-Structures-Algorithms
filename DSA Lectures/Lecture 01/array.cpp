#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};       //nt stores 4 bytes

    // size of array find krny klye...
    cout << sizeof(arr)/sizeof(arr[0]) <<" ";   //20/4 -->//output = 5;

    // ab int 4 bytes store krta hai ye kesy pta chlyga..
    int b;
    cout << sizeof(b) <<" ";              //output = 4;
}