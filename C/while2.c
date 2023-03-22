// addition of 10 natural numbers.
#include<stdio.h>
int main() {
	int count = 1, add = 0;
	while(count <= 10) {
		add = add + count;
		count++;
	}	
	printf("Addition is %i\n",add);
	return 0;
}
