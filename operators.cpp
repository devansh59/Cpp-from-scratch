#include<iostream>
using namespace std;
int main(){
	//OPERATORS.....
	
	int a = 3/5;
	cout<< a <<endl;  // int/int answer will be integer
					  // float/int will be float
					  //double/int will be double
	
	float b = 3.0/5;
	cout<< b <<endl;	
	
	//Relational Operators.(=,<=,>=,<,>,!=)
	int c = 2;
	int d = 3;
	
	bool first = (c==d);
	cout<< first << endl;  //print 0 as it is not True
	
	bool sec = (c<=d);
	cout<< sec << endl;	  //print 1 as it is not True
	
	bool thi = (c>=d);
	cout<< thi << endl;   //print 0 as it is not True
	
	//Logical Operator.(and , or)
	int e = 5;
    int f = 9;
  
    // false && false = false
    cout << ((e == 0) && (e > f)) << endl;
  
    // false && true = false
    cout << ((e == 0) && (e < f)) << endl;

    // true && false = false
    cout << ((e == 5) && (e > f)) << endl;

    // true && true = true
    cout << ((e == 5) && (e < f)) << endl;

	//Bitwise Operator
					  
					
}
