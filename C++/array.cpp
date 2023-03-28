// Average of 10 numbers
#include<iostream>
using namespace std;

int main() {
	int num[5];
	cout<<"Enter 5 numbers."<<endl;
	for(int i=0; i<5;i++) {
		cout<<"Enter the number:";
		cin>>num[i];
	}
	int add = 0;
	for(int i=0; i<5;i++) {
		add = add + num[i];
	}
	cout<<"Average is:"<<add/5<<endl;
	return 0;
}
