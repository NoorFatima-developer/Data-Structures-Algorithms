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
    cout << 9 << endl;                      //output = 9


    // Data Types:
    // ----------------Int(Stores 4 bytes)--------------
    // Variable declaration and initialization/definition:
    // int a; //declaration
    // int a = 11; // initialization/definition
    // yehi  kam hum same line m b krskty hain:
    int a = 10, c = 30;
    cout << "Value of a: " << a << endl;
    cout << a + c << endl;

    //-----------------Char(Stores 1 byte)--------------
    char a1 = 'a'; //declaration and initialization/definition
    cout << a << endl;

    //-----------------Float(Stores 4 bytes)--------------
    float f = 10.5;
    cout << f << endl;

    //-----------------Double(Stores 8 bytes)--------------
    double d = 10.5;
    cout << d << endl;

    //-----------------Boolean(Stores 1 byte)--------------

    bool a2 = true;     //output = 1
    bool b3 = false;    //output = 0;
    bool b4 = 0;        //output = false;
    bool b5 = 1;        //output = true
    cout << a2 << endl;
    cout << b3 << endl;
    cout << b4 << endl;
    cout << b5 << endl;
};