#include<iostream>
using namespace std;
int main(){
	int n,i,j,c;
	cin>>n;
	i = 1;
	c = 1;
	while(i<=n){
		j = 1;
		while(j<=n){
			cout<<c<<" ";
			c++;
			j++;
		}
		cout<<endl;
		i++;
	}
}
