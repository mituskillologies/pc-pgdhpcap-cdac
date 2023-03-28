// encapsulation
#include<iostream>
using namespace std;
class Circle {    		// class definition
	private:
		float radius;   // cannot be accessed using object
	public:	
		Circle(float r) {
			radius = r;
		}		
		float getArea() {
			float a;
			a = 3.14 * radius * radius;
			return a;
		}
		int getRadius() {
			return radius;
		}
};
int main() {
	int rad;
	cout<<"Enter the radius of circle:";
	cin>>rad;
	Circle c(rad);
	cout<<"Area of Circle of radius "<<c.getRadius()<<" is:"<<c.getArea()<<endl;
	return 0;
}
