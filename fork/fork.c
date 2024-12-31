#include <unistd.h>
#include <sys/types.h>

void	child(void)
{
	dprintf(2, "child");
}

void	dofork(void)
{
	pid_t pid;
	pid = fork();
	if (pid == 0)
	{
		child();
	}
	dprintf(2, "parent");
}

int main(void)
{
	dofork();
	return (0);
}
