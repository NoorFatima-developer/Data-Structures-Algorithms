#include <iostream>
using namespace std;


int main(){
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    for(int i = 0; i < num; i++){
        if(i == 4){
            break;
            cout << i << " " << endl;
        }
    }
}