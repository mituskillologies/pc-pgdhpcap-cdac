// union
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	int num1, num2;
	printf("Enter first number : ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	printf("Swapped Values are %i %i\n", num1, num2);
	return 0;
}
