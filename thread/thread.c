#include <pthread.h>
#include <stdio.h>

int num = 0;
pthread_mutex_t	lock = PTHREAD_MUTEX_INITIALIZER;

void *addOne(void *arg)
{
	(void) arg;
	while (1)
	{
		pthread_mutex_lock(&lock);
		if (num == 100)
			break ;
		num = num + 1;
		printf("current value is %d\n", num);
		pthread_mutex_unlock(&lock);
	}
	return (NULL);
}

int main(void)
{
	pthread_t	p1, p2;
	pthread_create(&p1, NULL, &addOne, NULL);
	pthread_create(&p2, NULL, &addOne, NULL);
	pthread_join(p1, NULL);
	pthread_join(p2, NULL);
	pthread_mutex_destroy(&lock);
	return (0);
}
