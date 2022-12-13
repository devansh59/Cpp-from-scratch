#include<iostream>
using namespace std;

int search(int arr[],int size,int key){
	int start = 0;
	int end = size-1;
	
	int mid = (start + end)/2;
	
	while(start<=end){
		if(arr[mid] == key){
			return mid;
		}
		if(key > arr[mid]){
			start = mid+1;
		}
		else{
			end = mid-1;
		}
		mid = (start + end)/2;
	}
	cout<<key<<" is not there.";
	
//	return -1;
}

int main(){
	
	int odd[5] = {2,4,6,8,10};
	int k;
	cin>>k;
	
	int index = search(odd,5,k);
	
	cout<<"Index of "<<k<<" is "<<index<<endl;
	
}
