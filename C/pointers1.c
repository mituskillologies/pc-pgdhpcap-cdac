// pointers
#include<stdio.h>
int main() {
	int num1 = 12, num2 = 45;
	int *p1, *p2;     // pointer variable declaration
	p1 = &num1;       // store address of variable in pointer
	p2 = &num2;
	printf("Address1: %p\n", p1);  // print address
	printf("Address2: %p\n", p2);
	
	printf("First Data: %d\n", *p1);   // access the contents
	printf("Second Data: %d\n", *p2);
	return 0;
}
