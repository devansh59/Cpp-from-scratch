#include <iostream>
using namespace std;

int main()
{
    cout<<"Hello World"<<endl;
    int a=2,b=3,sum=0;
    //for post increment
    sum = a + (b++);
    cout<<sum<<endl;
    //for preincrement
    sum = a + (++b);
    cout<<sum<<endl;
    //for post decrement
    sum = a + (b--);
    cout<<sum<<endl;
    //for predecrement
    sum = a + (--b);
    cout<<sum<<endl;
    return 0;
}
