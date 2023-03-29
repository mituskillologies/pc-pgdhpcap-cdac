// arrays
#include<stdio.h>
int main() {
	float marks[5]; // array declaration way-1
	int roll[] = {1,2,3,4,5}; // array declaration way-2
	int i, *p;
	p = &roll[0];
	for(i=0; i<5; i++,p++) {
		printf("Roll %d\n", *p);
	}
	return 0;
}
