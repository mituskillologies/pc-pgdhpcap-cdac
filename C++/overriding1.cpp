// simple function overloading
#include<iostream>
using namespace std;
class Shape {
	public:
		float radius, side;
		void input() {
			cout<<"Enter side of square: ";
			cin>>side;
		}
		float calculateArea() {
			return side * side;
		}
};
class Circle : public Shape {
	public:
		void input() {
			cout<<"Enter radius of circle: ";
			cin>>radius;
		}
		float calculateArea() {
			return 3.14 * radius * radius;
		}
};
int main() {
	Circle c;
	c.input();
	cout<<"Area is: "<<c.calculateArea()<<endl;
	Shape s;
	s.input();
	cout<<"Area is: "<<s.calculateArea()<<endl;
	return 0;
}
