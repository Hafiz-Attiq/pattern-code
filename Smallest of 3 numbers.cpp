#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"give first number"<<endl;
    cin>>a;
    int b;
    cout<<"give second number"<<endl;
    cin>>b;
    int c;
    cout<<"give third number"<<endl;
    cin>>c;
    if(a<b && a<c){cout<<"a is the smallest number"<<endl;
    }
    if(b<a && b<c){cout<<"b is the smallest number"<<endl;
    }
    if(c<a && c<b){cout<<"c is the smallest number"<<endl;
    }
    return 0;
}
