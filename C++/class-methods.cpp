// simple class with methods
#include<iostream>
#include<string.h>
using namespace std;
class Person {    		// class definition
	public:
		char name[10];  // instance variables
		int age;
		float salary;
		
		void input() {  // class function / method
			cout<<"Enter the name: ";
			cin>>name;
			cout<<"Enter the age : ";
			cin>>age;	
			cout<<"Enter the salary: ";
			cin>>salary;
		}
		void show() {
			cout<<"Your data:"<<endl;
			cout<<name<<" "<<age<<" "<<salary<<endl;
		}
};
int main() {
	Person p1, p2;      // Create the object
	p1.input();         // Function call
	p1.show();
	p2.input();
	p2.show();
	return 0;
}
