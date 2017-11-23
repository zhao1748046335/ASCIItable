#include <iostream>
using namespace std;
int main(){
	char ch=65;
	for(int i=0;i<31;i++){
		ch=i;
		cout<<int(ch)<<" "<<ch<<"           ";
		cout<<int(ch+32)<<" "<<char(ch+32)<<"           ";
		cout<<int(ch+64)<<" "<<char(ch+64)<<"           ";
		cout<<int(ch+96)<<" "<<char(ch+96)<<"           ";
		cout<<endl;
	}
	cout<<"endl"<<endl;
	return 0;
}