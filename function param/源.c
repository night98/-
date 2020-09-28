#include <stdio.h>

struct Test2
{
	int a;
	int b;
};

struct Test1
{
	struct Test2 test;
}test1;

void address(int test) {
	int* prin = &test;
	test = 1;
	prin = test;
	printf("%p\n", prin);
}

void address2(int *test) {
	int* prin = test;
	printf("%p\n", prin);
}

int main(void) {
	struct Test2* p = &test1.test;
	short a = 0;
	int c = (int)a;
	test1.test.a = 1;
	address((int)p);
	address2((int *)p);
	address((int)a);
}
