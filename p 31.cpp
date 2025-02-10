#include <iostream>
/*A B C D E
B C D E F
C D E F G
D E F G H
E F G H I
*/
using namespace std;
int main(){
	char startch='A';
	for(int i=0;i<5;i++){
			char currentch;
	currentch =startch +i;
		for(int j=0;j<5;j++){
		
		cout<<currentch<<" ";
		currentch++;
		}
	cout<<endl;}
return 0;
}
