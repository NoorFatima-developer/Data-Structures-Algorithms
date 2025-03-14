#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //create vector, declare: way 01..

    // vector<int>v;
    // // way 02: jb hum vector k size k sath value initialize krty hain tu jitna size hota utani hi capacity ati hai...
    // vector<int>v1(5, 1);
    // // way 03:
    // // vector<int>v3 = {1, 2, 3, 4, 5};

    // // size and capacity of vector...
    // cout << "Size of v: "<< v.size()<< endl;
    // cout << "Capacity of v: "<<v.capacity()<<endl;
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(10);
    // cout << "Size of v: "<< v.size()<< endl;
    // cout << "Capacity of v: "<<v.capacity()<<endl;

    // // update value of v...
    // v[1] = 5;       //tu ab v k pehly index mai 2 ki jagah 5 ajyega...
    // cout << "Size of v1: "<< v1.size()<< endl;
    // cout << "Capacity of v1: "<<v1.capacity()<<endl;
    // v1.push_back(8);
    // cout << "Size of v1: "<< v1.size()<< endl;
    // cout << "Capacity of v1: "<<v1.capacity()<<endl;

    // delete vector:

//     vector<int>vnew;
//     vnew.push_back(4);
//     vnew.push_back(5);
//     vnew.push_back(6);
//     vnew.push_back(8);
//     vnew.push_back(9);

//     // remove value of last vector:
//     vnew.pop_back();
//     cout << "Size of vnew: "<< vnew.size()<< endl;
//     cout << "Capacity of vnew: "<<vnew.capacity()<<endl;
//     // ab aghr mjy bech waly kisi index ko hatana o tu i will run this:
//     vnew.erase(vnew.begin()+1);     //iska mtlb h k jo array k 1 index pr hai osko remove krdo...
//     cout << "Size of vnew: "<< vnew.size()<< endl;
//     cout << "Capacity of vnew: "<<vnew.capacity()<<endl;
//     // print vnew:
//     for(int i = 0; i < vnew.size(); i++)
//     cout << vnew[i] << " ";
//     // ab aghr bech m koi index insert krwana hai tu i can use:
//     vnew.insert(vnew.begin()+1, 50);
//     cout << endl;
//     for(int i = 0; i < vnew.size(); i++)
//     cout << vnew[i] << " ";
//     // lkin aghr m chah ri o k 50 ki jagah hi new element aye or 50 agy jany ki bjye khtm e o jye
//     // tu i will simply do this:
//     vnew[1] = 37;
//     cout << endl;
//     for(int i = 0; i < vnew.size(); i++)
//     cout << vnew[i] << " ";

//     // ab aghr m sary e elements ko array m sy clearn krna chahti o tu i wil use this:
//     vnew.clear();
//     cout << endl;
//     cout << "Size of vnew: "<< vnew.size()<< endl;
//     cout << "Capacity of vnew: "<<vnew.capacity()<<endl;
// }


// aghr array ka 0 index print krwana hai tu i can use these two ways:
// ya array k end waly index ko print krwana o tu i can use this:

vector<int>arr;
arr.push_back(2);
arr.push_back(42);
arr.push_back(25);
arr.push_back(8);
arr.push_back(9);

// print 1st element of an array:
cout << arr[0]<<endl;
cout << arr.front()<<endl;
// print last element of an array:
cout << arr[arr.size()-1]<<endl;
cout << arr.back()<<endl;

// and aghr m apni puri arr ko new kisi variable mai copy krna chahti o tu i will do this:

vector<int>a;
a = arr;
cout << a.size();

}