// reverse the string
#include<iostream>
#include<string.h>
using namespace std;

int factorial(int n) {
	int fact = 1;
	for(int i=n; i > 1; i--)
		fact = fact * i;
	
	return fact;
}
int main() {
	int num;
	cout<<"Enter the number: ";
	cin>>num;
	cout<<"The factorial is: "<<factorial(num)<<endl;
	return 0;
}
