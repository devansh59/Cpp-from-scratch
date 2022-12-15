#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4> a = {1,2,3,4};
    int size = a.size();
    for(int i=0;i<size;i++){
        std::cout << a[i] << std::endl;
    }
    cout<<"Element at 2nd index: "<<a.at(2)<<endl;
    cout<<"Is Empty? "<<a.empty()<<endl;

    cout<<"First Element: "<<a.front()<<endl;
    cout<<"last Element: "<<a.back()<<endl;

}