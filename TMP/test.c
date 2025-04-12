 # include <unistd.h>
 # include <stdio.h>
 # include <stdlib.h>
 # include <limits.h>
 # include <pthread.h>
 # include <sys/time.h>

void	*work(void *id)
{
	int	*idd;

	idd = (int*) id;
	printf("\nThe id is : %d\n", *idd);
	usleep(2000000);
	printf("\nEnd : %d\n", *idd);
	return (NULL);
}

// int	main()
// {

// 	int	id1 = 1;
// 	int	id2 = 2;

// 	work(id1);
// 	work(id2);

	
// }

int	main()
{
	pthread_t	thread1;
	pthread_t	thread2;
	int	id1 = 1;
	int	id2 = 2;

	pthread_create(&thread1, NULL, work, (void*)&id1);
	pthread_create(&thread2, NULL, work,(void*) &id2);

	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);
	

	exit(1);
}
