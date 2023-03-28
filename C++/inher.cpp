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
class Circle : public Shape {    // derived class		
	public:		
		float getArea() {
			float a;
			a = 3.14 * radius * radius;
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
