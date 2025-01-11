#include <stdio.h>

void loopy()
{
	while (1)
	{
		dprintf(2, "loopy...\n");
	}
}

void funcC(int *ptr)
{
	*ptr = 42;
	loopy();
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
