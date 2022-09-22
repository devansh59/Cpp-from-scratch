#include<iostream>
using namespace std;
int main(){
	int n,row,col;
	cin>>n;
	
	row=1;
	while(row<=n){
		col=1;
		while(col<=row){
			cout<<char('A'+row+col-2);
			col++;
		}
		cout<<endl;
		row++;
	}
	
}
