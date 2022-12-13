#include<iostream>
using namespace std;

int first(int arr[],int size,int key){
    int s = 0,e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int last(int arr[],int size,int key){
    int s = 0,e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int n,k,c ;
    cin>>c;
    for(int j = 0;j<=c;j++){
        cin>>n>>k;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    
    cout<<"First Index of "<<k<<" is "<<first(array,n,k)<<endl;
    cout<<"last Index of "<<k<<" is "<<last(array,n,k)<<endl;

        
    }
    
}