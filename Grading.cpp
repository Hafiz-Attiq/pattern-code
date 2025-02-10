#include <iostream>
using namespace std;
int main(){
  int percentage;
   cout<<"please enter your percentage"<<endl;
   cin>>percentage;
   if(percentage>=90){
       cout<<"grade A"<<endl;
       }
       else if(percentage>=75 && percentage<=89){
           cout<<"grade B"<<endl;}
           else if(percentage>=60 && percentage<=74){
           cout<<"grade C"<<endl;
           }
           else if(percentage>=50 && percentage<=59){
           cout<<"grade D"<<endl;}
           else if (percentage<50 ){
           cout<<"grade F"<<endl;
           }
           return 0;}
