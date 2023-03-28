// constructors
#include<iostream>
#include<string.h>
using namespace std;
class Person {    		// class definition
	public:
		int age;
		float salary;
		
		Person() {      // constructor
			cout<<"Class initialized!"<<endl;
		}
		Person(int a, float s) { // parameterized  constructor
			age = a;
			salary = s;
		}
		void show() {
			cout<<"Your data:"<<endl;
			cout<<age<<" "<<salary<<endl;
		}
		~Person() {
			cout<<"Object Destroyed!";
		}
};
int main() {
	Person p1(23,56000), p2(26, 12000);      // Create the object
	p1.show();
	p2.show();
	return 0;
}
