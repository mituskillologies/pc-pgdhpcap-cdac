// addition of 10 natural numbers.
#include<stdio.h>
int main() {
	int count = 1, add = 0;
	do {
		add = add + count;
		count++;
	}
	while (count <= 10);
	printf("Addition is %i\n",add);
	return 0;
}
