#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int> a(5,1);//size 5 and initialize with 1.
    for(int i:a){
        cout<<i<<endl;
    }
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;
    
    v.push_back(1);//adding one element 
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;
    
     v.push_back(2);//adding second element 
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;
    
     v.push_back(3);//adding third element 
    cout<<"Capacity: "<<v.capacity()<<endl;//here vector capacity will be double thats why capacity 4 and size is 3
    cout<<"Size: "<<v.size()<<endl;
    
    cout<<"2nd element:"<<v.at(2)<<endl;

    cout<<"Front element:"<<v.front()<<endl;
    cout<<"Back/last element:"<<v.back()<<endl;
    
    //POP 
    //Before POP
    for(int i:v){
        cout<<i<<endl;
    }
    v.pop_back();
    //after POP
    cout<<".....After POP....."<<endl;
    for(int i:v){
        cout<<i<<endl;
    }
    
    //Clear [capacity will remain same and size will be 0]
    cout<<".....After clear....."<<endl;
    v.clear();
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;
    
}

