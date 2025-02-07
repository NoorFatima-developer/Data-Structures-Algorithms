// Inn patterns mai jahan space b print krni hain or num ya * b tu i will use
// condition mai 1 sy num-row tk inner for loop mai condition lgy gi..;

// Inn patterns klye:(jinmai spaces ati hai and then num..)
//                 *
//               * *
//             * * *
//           * * * *
//         * * * * *
// Formula:- (1 sy num - row)
// and jahan pr char type o ga wahan use this as well:
// char name = 'a' + (row - 1);

#include <iostream>
using namespace std;

// Q-01
//                 *
//               * *
//             * * *
//           * * * *
//         * * * * *
//       * * * * * *
//     * * * * * * *
//   * * * * * * * *
// * * * * * * * * *
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
// Q-02
//       1
//     2 2
//   3 3 3
// 4 4 4 4
int main(){
    // user sy input leny klye...
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for(int row=1; row<=num; row++){
        for(int col=1; col<=num-row; col++){
            // print star...
            cout<<"  ";
        }
        for(int col=1; col<=row; col++){
            // print numbers...
            cout<< row << " ";
        }
        cout << endl;

    }
}

// Q-03

//         1 
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5

int main(){
     // user sy input leny klye...
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for(int row=1; row<=num; row++){
        for(int col=1; col<=num-row; col++){
            cout<< "  " ;
        }

         for(int col=1; col<=row; col++){
             cout << col << " ";
         }
         cout << endl;

    }
}

// // Q-No 04:-(Way 01...)
//         a
//       a b
//     a b c
//   a b c d
// a b c d e

int main(){
    // user sy input leny klye...
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    for(int row=1; row<=num; row++){
        for(int col=1; col<=num-row; col++){
            cout << "  ";
        }
        char name = 'a' + (row - 1);
        for(char col='a'; col<=name; col++){
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}

// // Q-No 04:-(Way 02...)
//         a
//       a b
//     a b c
//   a b c d
// a b c d e

int main(){
    // user sy input leny klye...
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    for(int row=1; row<=num; row++){
        for(int col=1; col<=num-row; col++){
            cout << "  ";
        }
        for(char name = 'a'; name <='a' + (row - 1); name++){
            cout << name << " ";
        }
        cout << endl;
    }
    return 0;
 
}

// Q-No 04:-(Way 03...)
//         a
//       a b
//     a b c
//   a b c d
// a b c d e

int main(){
    // user sy input leny klye...
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    for(int row=1; row<=num; row++){
        for(int col=1; col<=num-row; col++){
            cout << "  ";
        }
        for(int col=1; col<=row; col++){
            char name = 'a' + (col -1);
            cout << name << " ";
        
        }
        cout << endl;
        
    }
    return 0;
 
}

// // Q-05:
//       1
//     2 1
//   3 2 1
// 4 3 2 1

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for(int row=1; row<=num; row++){
        for(int col=1; col<=num-row; col++){
            cout << "  ";
        }
        for(int col=row; col>=1; col--){
            cout << col << " ";
        }
        cout << endl;

   }
}