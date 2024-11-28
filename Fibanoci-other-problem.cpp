#include <iostream>
#include <string>
using namespace std;
// FABINACI SERIES
// int main() {
//    int n=7;
//    int a=0 ,b=1;
//    int next;

//    for(int i=0;i<n;i++){
//     cout<<a<<" ";
//     next=a+b;
//     a=b;
//     b=next;
//    }
//    cout<<endl;
// }

// PROGRAM TO CHECK PLANDIROM

// int main(){

//  string input;
//     cout << "Enter a word or number: ";
//     cin >> input;

// int left=0, right=input.length()-1;

// bool isPlandirum=true;
// while(left<right){
//    if(input[left]!=input[right]){
//      isPlandirum=false;
//    }
//    left++;
//    right--;
// }

// if(isPlandirum){
//    cout<<"It is Plandirum "<<endl;
// }
// else {
//    cout<<"It is not "<<endl;
// }
// // cout<< isPlandirum<<endl;
// }

// NOW PLANDIRUM FOR INTEGERS

// int main(){
//    int input;
//    cout<<"Enter any number "<<endl;
//    cin>>input;
//    int left=0, right=input.length()-1;
// bool isPlandirum=true;
//    while(left<right){
//       if(input[left]!=input[right]){
//          isPlandirum=false;
//       }
//       left++;
//       right--;
//    }

//    if(isPlandirum){
//       cout<<"It is plandirum "<<endl;
//    }
//    else{
//       cout<<"It is not "<<endl;
//    }
// }

// NOW CODE TO CHECK NUMBER IS PRIME OR NOT

// int main(){

// int n;
// cout<<"Enter any number "<<endl;
// cin>>n;
// bool isPrime=true;

// if(n<=1){
//     isPrime=false;
// }
//    for(int i=2;i*i<=n;i++){
//       if(n % i==0){
// isPrime=false;
//       }
//    }

// if(isPrime){
//    cout<<"The number is Prime "<<endl;
// }
// if(!isPrime){
//    cout<<"The number is not prime  "<<endl;
// }

// return 0;
// }

// int main(){

// int lastDigit;
// int num=121;
// int original=num;
// int reverse =0;

// while(num>0){
// lastDigit=num%10;
// reverse=reverse*10+lastDigit;
// num/=10;
// }

//   if (original == reverse) {
//         cout << "It is a palindrome" << endl;
//     } else {
//         cout << "It is not a palindrome" << endl;
//     }
// cout<<"The reverse of number is "<<reverse;
// }

// Below code is to find sum of given numbers

// int main()
// {
//     int input;
//     cout << "Enter any number " << endl;
//     cin >> input;
//     cout << "Your Number is " << input << endl;
//     int sum = 0;
// if(input>0){
// while (input > 0)
//     {
//         sum = sum + input % 10;
//         input /= 10;
//     }

//     cout<<"Your sum is "<<sum<<endl;
// }

// if(input<=0){
//     cout<<"You cant find Sum "<<endl;
// }

// }

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 1, 2, 3, 5};
    int sz = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < sz; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < sz; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }

        if(isUnique){
            cout<<"Unique Elements is "<<arr[i]<<endl;
        }
        
    }
    return 0;
}
