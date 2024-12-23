#include <iostream>
using namespace std;


// Example 01:(package is greater than 10)

int main() {
    int package;
    cout << "Enter your Package: ";
    cin >> package;

    if(package > 10){
        cout << "Accepted";
    }
    else{
        cout << "Rejected";
    }
}

// Example 02:(a is greater than b)

int main(){
    int a, b;
    cout << "Enter your first Number: ";
    cin >> a;

    cout << "Enter your second Number: ";
    cin >> b;

    if(a>b){
        cout << a << " is greater than " << b;
    }

    else {
        cout << a << " is less than " << b;
    }
}

// Example 03:(Number is even or odd)------------------> Way 01...

int main(){
    int number;
    cout << "Enter your first Number: ";
    cin >> number;

    if(number%2 == 0){
        cout << number << " is an even number";
    }else{
        cout << number << " is an odd number";
    }
}

// Example 03:(Number is even or odd)------------------> Way 02...

int main(){
    int number;
    cout << "Enter your first Number: ";
    cin >> number;

    if(number%2 == 1){
        cout << number << " is an odd number";
    }else{
        cout << number << " is an even number";
    }
}

// Example 04:(If age is greater than 18 Then print Adult , else print Teenage...)

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age > 18){
        cout << "You are an Adult";
    }else 
    {
        cout << "You are a Teenager";
    }   
}