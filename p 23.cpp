#include <iostream>
/*1 1 1 1 1
  0 0 0 0 0
  1 1 1 1 1
  0 0 0 0 0
  1 1 1 1 1
*/
using namespace std;
int main(){

	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
	    	if( i==2|| i==4){ cout<<0<<" ";}
		else { cout<<1<<" ";}
		}
	cout<<endl;
	}
return 0;
}
