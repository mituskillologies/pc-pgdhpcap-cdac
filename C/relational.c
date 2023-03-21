#include<stdio.h>
int main() {
	int num1, num2;
	printf("Enter two numbers:");
	scanf("%i%i", &num1, &num2);
	printf("The less than %i\n",num1 < num2);
	printf("The less or equals to %i\n",num1 <= num2);
	printf("The greater than %i\n",num1 > num2);
	printf("The greater or equals to %i\n",num1 >= num2);
	printf("The equals to %i\n",num1 == num2);
	printf("The not equals to %i\n",num1 != num2);
	return 0;
}
