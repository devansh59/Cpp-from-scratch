#include<iostream>
using namespace std;
int main(){
	int n,row,col;
	cout<<"Enter The N:";
	cin>>n;
	
	row = 1;
	while(row<=n){
		col = 1;
//		int value = row;
		while(col<=row){
			cout<<row+col-1;
//			value++;
			col++;
		}
		cout<<endl;
		row++;
	}
}
