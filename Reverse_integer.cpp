#include<iostream>
using namespace std;
int main(){
	int n,rem;
	cout<<"Enter The The Number :";
	cin>>n;
	while(n!=0){
		rem=n%10;
		cout<<rem;
		n=n/10;
	}
}
