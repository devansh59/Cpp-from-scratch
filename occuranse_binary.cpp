#include<iostream>
using namespace std;

int first(int arr[],int size,int key){
	int s,e;
	int m = s+e/2;
	int ans = -1;
	while(s<=e){
		if(arr[m]==key){
			ans = m;
			e = m-1;
		}
		if(arr[m]<key){
			s=m+1;
		}
		else{
			e = m-1;
		}
	}
	return ans;
}
int last(int arr[],int size,int key){
	int s,e;
	int m = s+e/2;
	int ans = -1;
	while(s<=e){
		if(arr[m]==key){
			ans = m;
			s = m+1;
		}
		if(arr[m]<key){
			s=m+1;
		}
		else{
			e = m-1;
		}
	}
	return ans;
}

int main(){
	int arr[7] = {1,2,2,2,2,3,4};
	int k;
	cout<<"Enter The key whoes occurance you want to find:";
	cin>>k;
	int in1 = first(arr,7,k);
	int in2 = last(arr,7,k);
	
	int occ = (in2 - in1) + 1;
	cout<<occ;

}
