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
		~Person() {    // destructor
			cout<<"Object Destroyed!";
			//delete age;
		}
};
int main() {
	Person p1(23,56000);      // Create the object
	p1.show();
	return 0;
}
