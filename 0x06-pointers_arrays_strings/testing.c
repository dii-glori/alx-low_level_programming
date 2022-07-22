#include <stdio.h>

int main(void)
{
	int a[5];
	int n;
	int *p;
	a[2] = 1024;
	p = &n;

	printf("p is %p\na is %p\na[2]-p is %ld\np - a[2] is %ld\n", p, &a[2], &a[2]-p, p - &a[2]);

	return 0;
}
