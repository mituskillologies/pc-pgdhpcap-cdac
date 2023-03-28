// reverse the string
#include<iostream>
#include<string.h>
using namespace std;

int main() {
	char name[10];
	cout<<"Enter the name: ";
	cin>>name;
	cout<<"Reverse name is:";
	for(int i=strlen(name)-1; i>=0; i--)
		cout<<name[i];
	cout<<endl;
	return 0;
}
