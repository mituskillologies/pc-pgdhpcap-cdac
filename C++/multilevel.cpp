// inheritance
#include<iostream>
using namespace std;
class Shape	{        // base class
	protected:       // accessed only within derived class
		float radius;
	public:
		void initialize() {
			cout<<"Enter the radius: ";
			cin >> radius;
		}
		float getPerimeter() {
			return 2 * 3.14 * radius;
		}
};
class Constant : public Shape {
	public:
		float getPI() {
			return 22.0/7;
		}
};
class Circle : public Constant {    // derived class		
	public:		
		float getArea() {
			float a;
			a = getPI() * radius * radius;
			return a;
		}
};
int main() {
	Circle c;
	c.initialize();
	cout<<"Area of Circle is "<<c.getArea()<<endl;
	cout<<"Perimeter of Circle is "<<c.getPerimeter()<<endl;
	return 0;
}
