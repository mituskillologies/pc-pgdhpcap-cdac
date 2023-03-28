// simple class
#include<iostream>
#include<string.h>
using namespace std;
class Person {    		// class definition
	public:
		char name[10];  // instance variables
		int age;
		float salary;
};
int main() {
	Person p1, p2;      // Create the object
	p1.age = 25;
	p1.salary = 45000;
	strcpy(p1.name, "Prem");
	p2.age = 23;
	p2.salary = 23000;
	strcpy(p2.name, "Priya");
	cout<<p1.name<<" "<<p1.age<<" "<<p1.salary<<endl;
	cout<<p2.name<<" "<<p2.age<<" "<<p2.salary<<endl;
	return 0;
}
