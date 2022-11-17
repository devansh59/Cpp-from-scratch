#include<iostream>
using namespace std;

int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}

int nCr(int n,int r){
    int num = fact(n);
    int deno = fact(r)*fact(n-r);
    
    int ans = num/deno;
    return ans;
}

int main(){
    int n,r;
    cin>>n>>r;
    int ans = nCr(n,r);
    cout<<"Answer is:"<<ans;
}
