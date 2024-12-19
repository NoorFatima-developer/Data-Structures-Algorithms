#include <iostream>
using namespace std;


// Without loop b print o jyega but mehnat zada so will use for-loop:
int main(){
    cout << " Coder Army\n";
    cout << " Coder Army\n";
    cout << " Coder Army\n";
    cout << " Coder Army\n";
    cout << " Coder Army\n";
}

// Example 01:

int main(){
    // Ab i int type ka hai islye int likhna imp hai...
    for(int i = 0; i < 5; i++){
        cout << " Coder Army\n";
    }
}

// Example 02:(Print square of numbers)

int main(){

    int n;
    cout << "Enter the Number: ";
    cin >> n;

    for(int i = 1; i < n; i = i+1 ){
        cout << i << " " << "^ 2 = " << i*i << endl;
    }
}

// Example 03:(Print all Even Numbers)--->Way 01:

int main(){

    int n;
    cout << "Enter the Number: ";
    cin >> n;

    for(int num = 2; num <= n; num = num+2 ){
        cout << num << " ";
    }
}

//Example 02:(Print all Even Numbers)--->Way 02:

int main(){
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    for(int num = 1; num <= n; num = num+1 ){
        if(num % 2 == 0){
            cout << num << " ";
        }
        else{
            // do nothing
        }
    }
}