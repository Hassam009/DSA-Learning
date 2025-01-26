#include <iostream>
using namespace std;

//BELOW CODE TO PRINT STAR 
int main(){
int sz=4;
int i;
for(i=1;i<sz;i++){
 for(int j=0;j<3-(i*1);j++){
    cout<<" ";
 }  
for(int j=0;j<1;j++){
    cout<<"*";
}
if(i!=1){
     for(int j=1;j<(i*2)-2;j++){
    cout<<" ";
 }  
 for(int j=0;j<1;j++){
    cout<<"*";
}
}
cout<<endl; 
}

for(int i=1;i<sz-1;i++){
 for(int j=0;j<i;j++){
    cout<<" ";
 }  
for(int j=0;j<1;j++){
    cout<<"*";
}
if(i==1){
     for(int j=0;j<i;j++){
    cout<<" ";
 }  
for(int j=0;j<1;j++){
    cout<<"*";
}
}
cout<<endl; 
}

}