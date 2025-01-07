#include <stdio.h>
#include <string.h>

void	printArr(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		dprintf(2, "%d\n", arr[i]);
	}
}

int	squre(int arg)
{
	int	res = arg * arg;
	return (res);
}

int	main(void)
{
	char	*str;
	int		num, res;

	str = strdup("hello GDB!");
	dprintf(2, "%s\n", str);

	num = 42;
	dprintf(2, "%d\n", num);

	res = squre(num);
	dprintf(2, "%d\n", res);

	int arr[] = {42, 1, 0, 5};
	dprintf(2, "%d\n", *arr);
	printArr(arr, 4);
	return (0);
}

/*
cc -g basic.c
gdb ./a.out
break 24
run
print str
*/
