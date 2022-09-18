#include<iostream>
using namespace std;
int main(){
	int n,i,sum;
	cout<<"Enter the Number:";
	cin>>n;
	
	i = 1;
	sum =0;
	while(i<=n){
		if(i%2==0){
			sum = sum+i;
			
		}
		i++;
	}
	cout<<sum;
}
