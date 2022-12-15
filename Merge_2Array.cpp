#include<iostream>
using namespace std;

void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0;int j=0;int k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while(i<n){
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while(j<m){
        arr2[k] = arr2[j];
        i++;
        j++;
    }
}

int main(){
    int n,m;
    cout<<"Array1 size:";
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Array2 size:";
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int arr3[n+m];
    merge(arr1,n,arr2,m,arr3);
    // print(arr3,n+m);
    cout << "Array after merging" <<endl;
    for (int i=0; i < n+m; i++)
        cout << arr3[i] << " ";
 
    return 0;
}
