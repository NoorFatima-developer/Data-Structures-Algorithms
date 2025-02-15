#include <iostream>
using namespace std;

// Learn continue:
// continue ka mtlb hai k jahan pr continue ayega oss ko skip kr jao or oss sy nichy
// wali statemnts ko execute na kro balky direct increement kro or next pr jao lkin jispr continue laga hai
// osko skip krdo...

int main(){
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    for(int i = 1; i <= num; i++){
        if(i == 4){
            continue;
        }
        cout << i << " ";
    }
    return 0;
}