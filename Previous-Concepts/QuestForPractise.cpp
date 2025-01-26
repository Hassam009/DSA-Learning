#include <iostream>
using namespace std;
#include <cmath>

// int main(){
// int n;
// int count=0;
// cout<<"Enter the number for whic you want occurences "<<endl;
// cin>>n;
// int arr[]={1,2,3,4,5,6,7,2,4,5,2};
// int sz = sizeof(arr) / sizeof(arr[0]);
// cout<<"Elements of array "<<endl;
// for(int i=0;i<sz;i++){
//     cout<<arr[i]<<" ";
//     if(n==arr[i]){
//         count++;
//     }

// }
// cout<<endl;
// cout<<"The Element "<<n << " occur "<<count<<" times "<<endl;

// return 0;
// }

#include <iostream>
#include <cmath> // for sqrt()

using namespace std;

// int main() {
//     int n = 7; // Number of primes to print
//     int count = 0; // Count of prime numbers found
//     int num = 2;   // Start from 2 (the first prime number)
    
//     while (count < n) {
//         bool isPrime = true; // Assume num is prime
        
//         // Special case for 2 as it's prime and the only even prime number
//         if (num == 2) {
//             isPrime = true;
//         } else {
//             // Check divisibility for numbers greater than 2
//             for (int i = 2; i <= sqrt(num); i++) {
//                 if (num % i == 0) {
//                     isPrime = false; // num is divisible by i, so it's not prime
//                     break;
//                 }
//             }
//         }

//         // If it's prime, print it and increment the count
//         if (isPrime) {
//             cout << num << " ";
//             count++;
//         }

//         // Move to the next number
//         num++;
//     }

//     cout <<"Elements are "<<count << endl; // Move to the next line after printing primes
//     return 0;
// }


//FACTORIAL OF NUMBER

// int main(){
// int fac=1;
// int n=4;

// for(int i=n;i>=1;i--){
//     cout<<" "<<i;
//     fac*=i;
// }
// cout<<endl;
// cout<<"Factorial is "<<fac<<endl;
// }


int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int next;

    for(int i=0;i<n;i++){
        next=i+1;
        i=next;
        cout<<arr[i]<<endl;
    }
}