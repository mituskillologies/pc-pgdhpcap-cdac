// arrays
#include<stdio.h>
int main() {
	float marks[5]; // array declaration way-1
	long roll[] = {1,2,3,4,5}; // array declaration way-2
	int i;
	for(i=0; i<5; i++) {
		printf("Roll %ld = %p\n", roll[i], &roll[i]);
	}
	return 0;
}
