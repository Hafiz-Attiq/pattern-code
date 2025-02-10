#include <iostream>
using namespace std;
int main(){
  int a;
  cout<<"please enter your bill money"<<endl;
  cin>>a;
  if(a<100 ){
      cout<<"discount is 0%"<<endl;
  }
  else if(a>=100   && a<=500   ){
      cout<<"discount is 10%"<<endl;
  } 
  else if( a>500 ){
      cout<<"discount is 20%"<<endl;
      }
      return 0;
}
