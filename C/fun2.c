// functions
#include<stdio.h>

// Function Definition
void square(int n) {
	int sq;
	sq = n * n;
	printf("Square is: %i\n", sq);
}

int main() {
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	square(x);
	square(12);
	return 0;
}


