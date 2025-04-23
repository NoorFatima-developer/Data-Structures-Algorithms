#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    // reverse a string

    int start = 0, end = s.size();

    while(start < end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }

    cout << s;
}