// 2D arrays
#include<stdio.h>
void C() {
	printf("Hello C");
}
void B() {
	printf("Hello B");
	C();
	printf("Good Bye B");
}
void A() {
	printf("Hello A");
	B();
	printf("Good Bye A");
}
int main() {
	A();
	return 0;
}
