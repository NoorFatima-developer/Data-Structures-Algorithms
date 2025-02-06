#include <iostream>
using namespace std;

int main(){
    for(int row=1; row<=5; row++){
        // print space...
        for(int col=1; col<=5-row; col++){
            cout << " " ;
        
        for(int col=1; col<=row; col++){
            // print star...
            cout << " * " ;
        }
        cout << endl;
    }
}
}


