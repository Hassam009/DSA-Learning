#include <iostream>
using namespace std;

int main(){

int arr[]={23,5,67,79,1,24,657,90,84,21,45,67,4,5,31,213,40};
int n=17;
int target=45;

bool isFound=false;

for(int i=0;i<n;i++){

    if(arr[i]==target){
        cout<<"Element "<<target<< " found at "<<i<<endl;
        isFound=true;
        break;
    }
}
 if(!isFound){
        cout<<"Not found "<<endl;
    }

}