#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

int counter = 0;
int sum = 0;
pthread_mutex_t	lock = PTHREAD_MUTEX_INITIALIZER;

void *addOne(void *arg)
{
	(void) arg;
	while (1)
	{
		pthread_mutex_lock(&lock);
		if (counter >= 10)
		{
			break ;
		}
		int tmp = counter;
		usleep(100);
		counter = tmp + 1;
		tmp = sum;
		usleep(100);
		sum = tmp + counter;
		printf("counter:%d, sum:%d\n", counter, sum);
		pthread_mutex_unlock(&lock);
	}
	return (NULL);
}

int main(void)
{
	pthread_t	p1, p2, p3;
	pthread_create(&p1, NULL, &addOne, NULL);
	pthread_create(&p2, NULL, &addOne, NULL);
	pthread_create(&p3, NULL, &addOne, NULL);
	pthread_join(p1, NULL);
	pthread_join(p2, NULL);
	pthread_join(p3, NULL);
	printf("done");
	return (0);
}

/*
this prog will hung, where is the bug?
info thread
thread 2
thread apply all backtrace
*/
