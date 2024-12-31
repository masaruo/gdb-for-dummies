#include <stdio.h>

void loop()
{
	while (1)
	{
		dprintf(2, "hello world\n");
	}
}

int main(void)
{
	loop();
	return (0);
}
