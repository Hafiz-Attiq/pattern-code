#include <iostream>
using namespace std;
int main(){
    float a,r,t;
    float i;
    cout<<"give the amount(a)"<<endl;
    cin>>a;
    cout<<" give rate of interest(r)"<<endl;
    cin>>r;
    cout<<"give time(t)"<<endl;
    
     
     cin>>t;
    i=(a*r*t/100);
    cout<<"interest is="<<i<<endl;
    return 0;
    }
