// 4: Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.

#include <iostream>
using namespace std;

// Using null terminator to do this:(its funny code..)

int main(){
    char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};

    cout << arr << " " << endl;
}

// Without null terminator, I can also do it using loop:
 
// int main(){
//     char arr[26];
//     for(int i=0; i<26; i++){
//         arr[i] = 'a' + i;
//     }
    
//     for(int i=0; i<26; i++){
//         cout << arr[i] << " ";
//     }
    
//     return 0;
// }