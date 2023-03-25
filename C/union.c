// union
#include<stdio.h>
#include<string.h>
union student {   // Structure definition
	int roll;
	char name[10];
	float marks;
};
struct student1 {   // Structure definition
	int roll;
	char name[10];
	float marks;
}s2;
int main() {
	union student s1;  // structure variable
	s1.roll = 1;    // structure initialization
	printf("roll: %d\n",s1.roll);
	strcpy(s1.name, "Tushar");
	printf("name: %s\n", s1.name);
	s1.marks = 67.91;
	printf("marks: %.2f\n", s1.marks);
	printf("Size of union: %ld\n", sizeof(s1));
	printf("Size of structure: %ld\n", sizeof(s2));
	return 0;
}
