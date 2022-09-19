#include<iostream>
using namespace std;
int main(){
	int n,row,col,count;
	cout<<"Enter The Value Of N:";
	cin>>n;
	
	row=1;
	count=1;
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
