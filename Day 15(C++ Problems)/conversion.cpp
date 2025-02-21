#include <iostream>
using namespace std;

// convert lower case alphabets to uppercase alphabets...

char convert(char n){
    char ans = n - 'a' + 'A';
    return ans;
}

int main(){
    char name;
    cout << "Enter a conversion alphabet: ";
    cin >> name;
    char ans = convert(name);
    cout << "Converted character: " << ans << endl;
    return 0;
}