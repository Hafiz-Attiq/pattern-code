#include <iostream>
using namespace std;
int main(){
  int a,b,c;
  cout<<"please give the three sides of triangle"<<endl;
  cin>>a>>b>>c;
  if(a+b>c && a+c>b && b+c>a){
      cout<<"triangle is valid"<<endl;
  }
    else{cout<<"triangle is not valid"<<endl;}
      return 0;
}
