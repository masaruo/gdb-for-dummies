#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int *arr = malloc(1 * sizeof(int));
	arr[1] = 100;
	printf("%d\n", arr[1]);
	return (0);
}
