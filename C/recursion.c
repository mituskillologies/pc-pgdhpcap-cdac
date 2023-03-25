// functions recursion
#include<stdio.h>

// Function Definition
void show() {
	printf("Hello World\n");
	show();   // Function calls itself
}

int main() {
	show();
	return 0;
}
