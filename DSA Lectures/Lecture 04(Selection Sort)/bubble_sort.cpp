// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int *arr = new int[n];
//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     // n = aghr 5 hai tu rounds n -1 hongy and bubbles n - 2 bnygy...
//     for (int i = n - 2; i >= 0; i--)
//     { // n-2 islye likha hai ku k n-2 bubbles bn re hain 1 round mai...
//         bool swapped = 0;
//         for (int j = 0; j <= i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swapped = 1;
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//         if (swapped == 0)
//         {
//             break;
//         }
//     }
//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }



// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int *arr = new int[n];
//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     // Reverse Bubble Sort: Move smallest elements to the front
//     for (int i = n - 1; i > 0; i--)  // Bubble passes from back to front
//     {
//         bool swapped = false;

//         for (int j = i; j > 0; j--)  // Compare from `i` down to `1`
//         {
//             if (arr[j] < arr[j - 1])  // Swap if out of order
//             {
//                 swap(arr[j], arr[j - 1]);
//                 swapped = true;
//             }
//         }

//         if (!swapped)
//         {
//             break;  // If no swaps happened, the array is already sorted
//         }
//     }

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     delete[] arr;  // Free dynamically allocated memory
//     return 0;
// }

