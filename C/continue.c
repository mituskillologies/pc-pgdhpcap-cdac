// break
#include<stdio.h>
int main() {
	int num;
	for(num=0; num<10; num++) {
		if (num == 5)
			continue;
		printf("%d\n", num);
	}
	return 0;
}
