#include<stdio.h>
int main() {
	int num1, num2, add, sub, mul, div, mod;
	printf("Enter two numbers:");
	scanf("%i%i", &num1, &num2);
	add = num1 + num2;
	sub = num1 - num2;
	mul = num1 * num2;
	div = num1 / num2;
	mod = num1 % num2;
	printf("The addition is %i\n",add);
	printf("The subtraction is %i\n",sub);
	printf("The multiplication is %i\n",mul);
	printf("The division is %i\n",div);
	printf("The remainder is %i\n",mod);
	return 0;
}
