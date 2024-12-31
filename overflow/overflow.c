#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int *arr = malloc(1 * sizeof(int));
	arr[100] = 100;
	printf("%d\n", arr[1000]);
	return (0);
}
