#include <iostream>
using namespace std;


// Pass by value:

void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    swap(num1, num2);
    cout << "After swapping: " << num1 << " " << num2 << endl;
    return 0;
 
}

