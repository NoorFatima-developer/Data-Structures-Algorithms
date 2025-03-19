#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool divide(vector<int>arr)
{
    int prefix = 0, total_sum = 0, n = arr.size();
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
        // int next_sum = total_sum - prefix;
        // if(total_sum - prefix == prefix)
        // if(total_sum == prefix + prefix)
        if(total_sum == 2*prefix);
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

