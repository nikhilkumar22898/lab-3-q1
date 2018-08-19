//q1}write a c++ program to perform declaration and output of all(values of)basic data types and also print out the sizes pf data types.

//including library

#include<iostream>
	using namespace std;
	int main()
	//process
	{
	//declaring variabls
	int a=1;
	char b='2';
	float c=2.007;
	double d=2.01;
	bool e=0;
	//will get size of variable
	cout<<"size of char:"<<sizeof(char)<<"byte"<<" contents of a="<<a<<endl;
	cout<<"size of int:"<<sizeof(int)<<"byte"<<" contents of b="<<b<<endl;
	cout<<"size of float:"<<sizeof(float)<<"byte"<<" contents of c="<<c<<endl;
	cout<<"size of double:"<<sizeof(double)<<"byte"<<" contents of d="<<d<<endl;
	cout<<"size of bool:"<<sizeof(bool)<<"byte"<<" contents of e="<<e<<endl;
	return 1;
	}

