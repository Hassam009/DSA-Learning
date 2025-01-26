#include <iostream>
using namespace std;

int main() {
int min=1000;
int max=-1;
int minIndex=-1;
int lgIndex=-1;
   int arr[]={1,2,4,5,0,7,8,9,10,20,15};
   int sz=11;
   for(int i=0;i<sz;i++){
    if(arr[i]<min){
        min=arr[i];
        minIndex=i;

    }
    if(arr[i]>max){
        max=arr[i];
        lgIndex=i;
    }

     //NOw below code is to swap for with minimum and largest number
   }
   cout<<"Before Swaping "<<endl; 
    for(int i=0;i<sz;i++){
     cout<<arr[i]<<" ";
     }
     cout<<endl;
     swap(arr[minIndex], arr[lgIndex]);
        cout<<"After Swaping "<<endl;
     for(int i=0;i<sz;i++){
      cout<<arr[i]<<" ";
     }
     cout<<endl;
   cout<<"The minimum number is "<<min<<" and its index is "<<minIndex<<endl;
   cout<<"The miximum number is "<<max<<" and its index is "<<lgIndex<<endl;


  
}
