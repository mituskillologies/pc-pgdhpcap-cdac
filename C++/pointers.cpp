// pointers
#include<iostream>
#include<string.h>
using namespace std;

int main() {
	int n1, n2, *p1, *p2, add;
	cout<<"Enter first number: ";
	cin>>n1;
	cout<<"Enter second number: ";
	cin>>n2;
	p1 = &n1;
	p2 = &n2;
	add = *p1 + *p2;
	cout<<"The addition is: "<<add<<endl;
	return 0;
}
