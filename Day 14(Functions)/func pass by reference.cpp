#include <iostream>
using namespace std;

// Pass by reference:
// aghr ye ni b banogi tu error ni dega ku k ye built in func hai swap...
void swap(int &a, int &b){      //same name but different parameters
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap(float &a, float &b){  //same name but different parameters
                                // ab aghr m nichy oper waly swap ko e call krogi tu wo error dega ku k ye float h
                                // or oper int type islye jb esa error ayega tu isko hum func overloaading bolty hain...
    float temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    swap(num1, num2);
    cout << "After swapping: " << num1 << " " << num2 << endl;
    
    float num3=4.8, num4=3.6;
    swap(num3, num4);
    cout << "After swapping: " << num3 << " " << num4 << endl;
    
    return 0;
}

