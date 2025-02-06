#include <iostream>
using namespace std;

int main(){

    // user sy input leny klye...
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for(int row=1; row<=num; row++){
        // print space...
        for(int col=1; col<=num-row; col++){
            cout<<"  ";
        }
        for(int col=1; col<=row; col++){
            // print star...
            cout<<"* " ;
        }
        cout << endl;
        
    }
}


