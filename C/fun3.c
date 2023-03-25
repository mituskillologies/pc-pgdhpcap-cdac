// functions
#include<stdio.h>

// Function Definition
int square(int n) {
	int sq;
	sq = n * n;
	return sq;
}

int main() {
	int x, result;
	printf("Enter a number: ");
	scanf("%d", &x);
	result = square(x);
	printf("Square is %i\n", result);
	printf("Square is %i\n", square(6));
	return 0;
}


