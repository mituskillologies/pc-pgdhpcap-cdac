// simple function overloading
#include<iostream>
using namespace std;
class Shape {
	public:
		float radius, side;
		virtual void input() {
			cout<<"Enter side of square: ";
			cin>>side;
		}
		virtual float calculateArea() {
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
	Shape s, *p;
	p = &s;
	p->input();
	cout<<"Area is: "<<p->calculateArea()<<endl;
	
	p = &c;
	p->input();
	cout<<"Area is: "<<p->calculateArea()<<endl;
	return 0;
}
