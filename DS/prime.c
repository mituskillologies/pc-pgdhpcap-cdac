// union
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	int num, i;
	printf("Enter a number: ");
	scanf("%d", &num);
	for(i=2;i<=sqrt(num);i++)
		if(num%i==0) {
			printf("Not Prime!\n");
			exit(0);
		}
	printf("Prime Number!\n");
	printf("Loop Executed %i\n",i-1);
	return 0;
}
