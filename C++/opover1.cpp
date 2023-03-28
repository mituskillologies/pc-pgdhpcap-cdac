// simple function overloading
#include<iostream>
using namespace std;
class MyData {
	public:
		int num1, num2;
		void get() {
			cout<<"Enter two numbers: ";
			cin>>num1>>num2;
		}
		MyData operator+ (MyData &m) {
			MyData t;
			t.num1 = num1 + m.num1;
			t.num2 = num2 + m.num2;
			return t;
		}
};
int main() {
	MyData m1, m2, m3;
	m1.get();
	m2.get();
	m3 = m1 + m2;
	cout<<"Addition is:"<< m3.num1 << " " << m3.num2;
	return 0;
}
