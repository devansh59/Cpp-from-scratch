#include<iostream>
using namespace std;
int main(){
	int n,row,col;
	cin>>n;
	
	row=1;
//	char ch = 'A' + row - 1;
	while(row<=n){
		col=1;
		char ch = 'A' + row - 1;
		while(col<=row){
			cout<<ch;
			col++;
		}
		cout<<endl;
		row++;
	}
}
