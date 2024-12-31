#include <stdio.h>

void funcC(int *ptr)
{
	*ptr = 42;
}

void funcB(int *ptr)
{
	ptr = NULL;
	funcC(ptr);
}

void funcA(int *ptr)
{
	funcB(ptr);
}

int main(void)
{
	int	ptr;
	ptr = 42;
	funcA(&ptr);
	return (0);
}

/*
	cc -g bt.c
	run
	backtrace
	frame 1
*/
