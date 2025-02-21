#include <iostream>
using namespace std;

// Learn Break..
// And break ka mtlb hai k jahan pr break laga dea hai oss sy next statment ko
// execute ni krna...and bs whi tk num print kro...

int main(){
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    for(int i = 1; i <= num; i++){
        if(i == 4){
            break;
        }
        cout << i << " ";
    }
    return 0;
}