#include<stdio.h>
int main() {
	int num;
	printf("Enter the number:");
	scanf("%i", &num);
	if(num > 0) {
		printf("Number is positive!\n");
	}
	else {
		printf("Number is negative!\n");
	}
	return 0;
}
