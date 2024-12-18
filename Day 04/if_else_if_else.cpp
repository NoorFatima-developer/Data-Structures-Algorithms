#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a Number: " << endl;
    cin >> num;

    if(num == 0){
        cout << num << " is 0" << endl;
    }
    else if(num > 0){
        cout << num << " is Positive" << endl;
    }
    else
    {
        cout << num << " is Negative" << endl;
    }
}