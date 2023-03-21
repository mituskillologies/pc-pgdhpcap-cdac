#include<stdio.h>
int main() {
	int num1, num2;
	printf("Enter two numbers:");
	scanf("%i%i", &num1, &num2);
	printf("The and %i\n",num1 < num2 && num1 < 100);
	printf("The or %i\n",num1 <= num2 || num1 < 100);
	printf("The not %i\n",!(num1 > num2));
	return 0;
}
