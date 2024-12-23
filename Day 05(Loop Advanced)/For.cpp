#include <iostream>
// using namespace boost::multiprecision;
using namespace std;


// Example 01:
// int main(){
//     for(char name = 'a'; name<='z'; name=name+1)
//     {
//         cout << name << " ";
//     }
// }

// Example 02:(Number starts from 10)

// int main(){
//     for(int i = 10; i>=1; i--){
//         cout << i << " ";
//     }
// }

// Example 03:(Number starts from n(n means jo number user enter kryga wahan sy 1 tk krwany hain print Numbers...))

// int main(){
//     int n;
//     cout << "Enter the Number: ";
//     cin >> n;

//     for(int i = n; i>=1; i--){
//         cout << i << " ";
//     }
// }


// Example 04:(3 3 numbers ka gap ana chahye and 100 include ni hona chahye...)

// int main(){
//     int n;
//     for(n=1; n<100; n=n+3){
//         cout << n << " ";
//     }
// }

// Example 05:(Print Table of 6 by using loop but start from 6 and ends at 60)

// int main(){
//     int i;
//     for(i=6; i<=60; i=i+6){
//         cout << i << " ";
//     }
// }


// Example 05:(Print Table of 6 by using loop with multiplication method...)

// int main(){
//     int n;
//     n = 8;
//     for(int i = 1; i<=10; i++){
//         cout <<  n << " * "  << i <<  " = "  << n * i << endl;
//     }
// }

//Example 05:(Print Table of 6 by using loop but result will be in n)

// int main(){
//     int n = 8;
//     for(int i = n; i<=10*n; i=i+n){
//         cout << i << " ";
//     }
// }

// Example 05:(Print Any Number Table)

// int main(){
//     int n, i;
//     cout << "Enter the Number: ";
//     cin >> n;

//     for(i = 1; i<=10; i++){
//         cout <<  n << " * "  << i <<  " = "  << n * i << endl;
//     }
// }


// Example 06:(Print power of any number result...)

// int main(){
//     int i, n, pow, num;
//     cout << "Enter the Number: ";
//     cin >> n;

//     cout << "Enter the Power: ";
//     cin >> pow;

//     // store n in variable...

//     num = n;
//     for(i=1; i<pow; i++){            //i - 1 ka mtlb h k jo b num user enter kry wahan sy start ho...
//        num = num * n;
//     }

//     cout << "Result: " << num << endl;
// }

// Example 07:(Print Sum of n Natural Numbers....)Way 01...

// int main(){
//     int i, n, sum=0;
//     cout << "Enter the Number: ";
//     cin >> n;

//     for(i = 1; i<=n; i++){
//         sum = sum + i;
//     }

//     cout << "Sum: " << sum << endl;
// }


// Example 07:(Print Sum of n Natural Numbers.....)Way 02...

// int main(){
//     int n, i, sum = 0;
//     cout << "Enter the Number: ";
//     cin >> n;

//     // By using this formula, hum Sum of n natural numbers nikal skty hain...

//     cout << "Sum: " << (n*(n+1)/2);
// }

// Example 08:(Print Factorial Number of n....)

// int main(){
//     int n, i;
//     // int 4 bytes ka hota hai islye wo factorial 50 k result ko store ni kr paraha overflow hora data..long int b work ni kr rha or na hi long long kr paraha hai
//     // isklye 1 library hai jo m install krogi jo br numbers k data klye hoti hai... 
//     int factorial;
//     // long int factorial
//     //long long factorial = 1;

//     cout << "Enter the Number: ";
//     cin >> n;
    
//     for(i = 1; i<=n; i++){
//         factorial = factorial * i;
//     }

//     cout << "Factorial: " << factorial << endl;
// }

// Example 09:(Print Prime Numbers....)

// int main(){
//     int n, i;
//     cout << "Enter the Number: ";
//     cin >> n;


//     if(n < 2){
//         cout << n << " is not a prime number" << endl;
//         return 0;
//     }
//     else{
//           for(i = 2; i<=n; i++){
//             if(n % 2 == 0){
//                 cout << n << " is not a prime number" << endl;
//                 return 0;
//             }
//         }

//         cout << n << " is a prime number" << endl;
//         return 0;
//     }
    
//     return 0;
    
//     }


//Example 10:(Print Fibonacci Numbers)

int main(){
    int n, i, last = 0, previous = 1, current;
    cout << "Enter the Number: ";
    cin >> n;

    cout << "Fibonacci series: ";

    // 0 sy start hoty hain islye i<n likhygy ku k 0 include krk 12 numbers hi bn jty hain...
    for(i = 0; i < n; i++){

//   Mai chahti o k fibonnaci series m jo numbers print hon wo 0 sy start hon pehly 2 numbers 0 or 1 hony chhaye islye meny iss line sy onko handle kea hai
        if(i <= 1){
            current = i;
        }

    else {
        current = last + previous;
        last = previous;
        previous = current;
    
    }
    cout << current << " ";
    }

    cout << endl;
    return 0;

}