#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool divide(vector<int>arr)
{
    int max = INT_MIN, prefix = 0, total_sum = 0, n = arr.size(), int next_sum;
    // Total sum...
    for(int i = 0; i < n; i++)
    {
        total_sum += arr[i];
    }

    for(int i = 0; i < n - 1; i++)
    {
        // left_part sum using prefix...
        prefix += arr[i];
        // right_part sum..
        next_sum = total_sum - prefix;

        if(next_sum == prefix)
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin>>n;

    vector<int>v(n);
    cout << "Enter the element in array: ";
    for(int i=0; i<n; i++)
    cin>>v[i];

    // oper meny pass by value use kea hai oska mtlb hi yehi hai k meri original value
    // change ni hogi iss divide k andr jo v hai oski
    // lkin aghr mai pass by reference krti tu iss v ki value change hoti...
    cout << divide(v);
}

