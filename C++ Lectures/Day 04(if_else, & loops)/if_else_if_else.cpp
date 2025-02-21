#include <iostream>
using namespace std;


// Example 01:(Number is positive or negative or 0)
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

//  Example 02:(Number is vowel or consonant)

int main(){
  char c = 'a';
  
  if(c == 'a'){
    cout << c << " is a vowel" << endl;
  }
  else if(c == 'e'){
    cout << c << " is a vowel" << endl;
  }
  else if(c == 'i'){
    cout << c << " is a vowel" << endl;
  }
  else if(c == 'o'){
    cout << c << " is a vowel" << endl;
  }
  else if(c == 'u'){
    cout << c << " is a vowel" << endl;
  }
  else 
  {
    cout << c << " is a consonant" << endl;
  }
}