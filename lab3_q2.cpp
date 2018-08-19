//q2}write a c++ program to use arithmetic operators on two numbers (you are supposed to declare two variables with integer/float values and work the rest of the problem with them)and find their sum,difference,multiply,divide and modulus(remainder)and display them individually.


//Library
	#include<iostream>
	using namespace std;
	int main (){
	int a=565;
	int b=120;
	int sum = a+b;
	int difference= a-b;
	int multiply= a*b;
	int divide=a/b;
	int mod = a%b;
	cout<<"sum of a and b is " << sum<<endl;
	cout<<"difference of a and b is " <<difference<<endl;
	cout<<"mulltiplication of a and b is " <<multiply<<endl;
	cout<<"division of a and b is " <<divide<<endl;
	cout << "mod of 565 and 120 is " << mod << endl; 
	return 0;
	}
