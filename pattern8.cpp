#include<iostream>
using namespace std;
int main(){
	int n,row,col;
	cin>>n;
	
	row=1;
	char count = 'A';
	while(row<=n){
		col = 1;
		while(col<=row){
			cout<<count;
			count++;
			col++;
		}
		cout<<endl;
		row++;
	}
}
