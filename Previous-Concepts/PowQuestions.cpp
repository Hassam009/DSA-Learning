#include <iostream>
using namespace std;

//Below code is for smaller number and not optimized code
// int main(){
// int x=2, n=4;
// int result=1;
// for(int i=0;i<n;i++){
//     result*=x;
// }
// cout<<"The Answer is "<<result;
// return 0;
// }


int main(){
    int x=2, n=9;
    int result=1;
    while(n>0){
        if(n%2==1){
            result*=x;
        }
        x*=x;
        n/=2;
    }
    cout<<"The Answer is "<<result;
    return 0;
}