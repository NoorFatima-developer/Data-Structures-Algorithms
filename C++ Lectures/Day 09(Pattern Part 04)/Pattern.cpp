// #include <iostream>
// using namespace std;

// // Q-NO-01:
// // Req--> space, *(1, 3, 5,...)
// // Formula for space: num - row:(1st inner loop)
// // Formula for *: 1 sy 2*row-1 tk..(2nd inner loop)

// //      *
// //     ***
// //    *****
// //   *******
// //  *********
// // ***********

// int main(){
//     int row;
//     int col;
//     int n;
    
//     cout << "Enter the Input: ";
//     cin >> n;

//     for(int row = 1; row <= n; ++row){
//         for(int col = 1; col <= n - row; ++col){
//             cout << " ";
//         }
//         for(int col = 1; col <= 2 * row - 1; ++col){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// // Q-NO-02:(Reverse Q-No-01...)
// // user jo num enter kr rha hai osk lehaz sy first row mai kitny nums ya * ayegay oska formula:
// // 2*n-1

// // Enter the Input: 5
// //  * * * * * * * * *
// //    * * * * * * *
// //      * * * * *
// //        * * *
// //          *

// int main(){
//     int row;
//     int col;
//     int n;
    
//     cout << "Enter the Input: ";
//     cin >> n;

//     for(int row = n; row >= 1; row--){
//         for(int col = 1; col <= n - row; ++col){
//             cout << "  ";
//         }
//         for(int col = 1; col <= 2 * row - 1; ++col){
//             cout << " *";
//         }
//         cout << endl;
//     }
// }

// // Q-NO-03:
// // Req--> space, inc + dec...
// // Formula for space: num - row:(1st inner loop)
// // Formula: increment and decrement..
// // For increment: 1 sy row tk..
// // For decrement: row - 1 sy 1 tk...
// //         1 
// //       1 2 1 
// //     1 2 3 2 1 
// //   1 2 3 4 3 2 1 
// // 1 2 3 4 5 4 3 2 1 

// int main(){
//     int row;
//     int col;
//     int n;
    
//     cout << "Enter the Input: ";
//     cin >> n;

//     for(int row=1; row<=n; row++){
//         // For space:(1 sy n-row tk)
//         for(int col=1; col<=n-row; col++){
//             cout << "  ";
//         }
//         // For num:(1 sy row tk)
//         for(int col=1; col<=row; col++){
//             cout << col <<" ";
//         }
//         // For decrement(row-1 sy 1 tk..) where row ends...
//         for(int col=row-1; col>=1; col--){
//             cout << col <<" ";
//     }
//         cout << endl;
//     }
// }


// // Q-NO-04:
// // Ab iss bry pattern ko humny 2 parts mai divide krk code kea 
// // hai, so pehly space ka formula hota tha..
// // n - row,,
// // yahan pr pehly *, space, *
// // so formula will be something like that..
// // 2*n - 2*row... || 2(n - row)
// // 2n = 2(user num jo enter kryga means total..)
// // so minus 2row from total...

// // Enter the Input: 5
// // * * * * * * * * * * 
// // * * * *     * * * * 
// // * * *         * * * 
// // * *             * * 
// // *                 * 
// // *                 * 
// // * *             * * 
// // * * *         * * * 
// // * * * *     * * * * 
// // * * * * * * * * * * 

// // Req-> *, space, * ...
// // Reverse krygy row ko...because * bry sy choty ki trf jaraha hai...
// // basically 2dfa star print hory hain islye space b 2times hogi..
// // space klye use this formula: 2*n-2*row===> 2*(n-row)
// int main(){
//     int row;
//     int col;
//     int n;
    
//     cout << "Enter the Input: ";
//     cin >> n;

//     // Row starts from n and ends at 1..
//     for(int row = n; row >= 1; row--){
//         // print *
//         for(int col = 1; col <= row; col++){
//             cout << "* ";
//         } 
//         // print space
//         for(int col = 1; col<= 2*(n-row); col++ ){
//             cout << "  ";
//         }
//         // print *
//         for(int col = 1; col <= row; col++){
//             cout << "* ";
//         } 
//         cout << endl;
//     }

//       // Row starts from 1 and ends at n..
//       for(int row = 1; row <= n; row++){
//         // print *
//         for(int col = 1; col <= row; col++){
//             cout << "* ";
//         } 
//         // print space
//         for(int col = 1; col<= 2*(n-row); col++ ){
//             cout << "  ";
//         }
//         // print *
//         for(int col = 1; col <= row; col++){
//             cout << "* ";
//         } 
//         cout << endl;
//     }

// }

// // Q-NO-05...(Butterfly pattern..)

// int main(){
//     int row;
//     int col;
//     int n;
    
//     cout << "Enter the Input: ";
//     cin >> n;

//     for(int row = 1; row <= n; row++){
//         // print *...
//         for(int col = 1; col <= row; col++){
//             cout << "* ";
//         }
//         // print space...
//         for(int col = 1; col <= 2*(n - row); col++){
//             cout << "  ";
//         }
//          // print *...
//          for(int col = 1; col <= row; col++){
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     for(int row = n-1; row >= 1; row--){
//         // print *...
//         for(int col = 1; col <= row; col++){
//             cout << "* ";
//         }
//         // print space...
//         for(int col = 1; col <= 2*(n - row); col++){
//             cout << "  ";
//         }
//          // print *...
//          for(int col = 1; col <= row; col++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// // Q-NO-06(DIAMOND PATTERN)

// // Enter the Input: 5
// //     * 
// //    * * 
// //   * * * 
// //  * * * * 
// // * * * * * 

// int main(){
//     int row;
//     int col;
//     int n;
    
//     cout << "Enter the Input: ";
//     cin >> n;

//     for(int row = 1; row <= n; row++){
//         // print space...
//         for(int col = 1; col <= n - row; col++){
//             cout << " ";
//         }
//         // print *...
//         for(int col = 1; col <= row; col++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

