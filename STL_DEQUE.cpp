//..............deque(Double ended queue)............
//from both ends starting as well as ending we can perfrom both push and pop(insertion or deletion)
//it is dynamic
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_front(1);
    d.push_back(2);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    //pop
    d.pop_back();
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    d.push_back(2);
    d.push_back(3);
     for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"First Element:"<<d.at(0)<<endl;

    cout<<"Front:"<<d.front()<<endl;
    cout<<"back:"<<d.back()<<endl;
    
    cout<<"Before Erasing Size:"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);//erase First Element
    cout<<"after Erasing Size:"<<d.size()<<endl;

}