// struct1
#include<stdio.h>
#include<string.h>
struct student {   // Structure definition
	int roll;
	char name[10];
	float marks;
};

int main() {
	struct student s1;  // structure variable
	s1.roll = 1;    // structure initialization
	strcpy(s1.name, "Tushar");
	s1.marks = 67.91;
	printf("%i %s %.2f\n", s1.roll, s1.name, s1.marks);
	return 0;
}
