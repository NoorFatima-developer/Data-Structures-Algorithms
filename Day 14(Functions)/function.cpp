#include <iostream>
using namespace std;

// Function to calculate the sum of two numbers

int sum(int a, int b){              //Function declare...
    int ans = a + b;                //Function define...
    return ans;
}

// Function return nothing, so used void as a return type..but it does not return any value...
void funct(){
    cout << "Hello from a function!" << endl;
}

int main(){
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Function call...
    int result = sum(num1, num2);

    cout << "Sum of " << num1 << " and " << num2 << " is: " << result << endl;
    funct();
    return 0;
}