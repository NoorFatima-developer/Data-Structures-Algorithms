
#include <iostream>
using namespace std;
int main()
{
    // Both output statements are true;
    // Jb b hum cout and cin likhty hain tu osklye hmy std:: likhna prta hai islye meny
    // oper using namespace std, kea hai ta k mjhy bar bar std:: na likhna pry...

    // std::cout << "Hello, world!" << std::endl;"

    // cout k andr "" string k andr jo b likhygy wo as it is print hoga....
    // \n next line ko new line m lek jany klye use hota hai ..but must be used in string...
    // << endl new line m lek jany klye use hota hai ..but must be used with insertion operator <<...
    cout << "Welcome to\n";
    cout << "Welcome to Noor" << endl;          // "<<" called insert operator...
    cout << "3 + 9\n";                              // output = 3 + 9
    

    // aghr mai without string likhogi tu operation perform krk output dyga...
    cout << 2 + 3 << endl;          //output = 5
    cout << 9;                      //output = 9

    // Variable declaration and initialization/definition:
    // int a; //declaration
    // int a = 11; // initialization/definition
    // yehi  kam hum same line m b krskty hain:
    int a = 10;
    cout << "Value of a: " << a << endl;
};