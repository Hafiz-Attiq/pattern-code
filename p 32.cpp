#include <iostream>
/*A F K P U
B G L Q V
C H M R W
D I N S X
E J O T Y
*/
using namespace std;
int main(){
	char startch='A';
	for(int i=5;i>0;i--){
			char currentch;
	currentch =startch +i;
		for(int j=5;j>0;j--){
		
		cout<<currentch<<" ";
		currentch+=5;
		}
	cout<<endl;}
return 0;
}
