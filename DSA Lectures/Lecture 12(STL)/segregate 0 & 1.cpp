// int main() {
//     int arr[] = {0, 1, 0 , 1, 1, 0, 0, 1};
//     int n = 8;

//     // start = 0 means 0 index..
//     int start = 0, end = n - 1;


//     while(start<end) {
//         // when start = 0...tu sb thek hai bs 1 qdm agy brha do..

//         if(arr[start] == 0)
//         start++;
//         else

//         {
//         // when start = 1; and end == 0; tu swap krdo 1 ko 0 sy...
//         if(arr[end] == 0)
//         {
//             swap(arr[start], arr[end]);
//             start ++;
//             end --;
//         }
//         else
//         // and else mai jb end 1 tu mtlb sb thek hai bs 1 qdm pichy krdo...
//             end --;
//         }

//     }
// }