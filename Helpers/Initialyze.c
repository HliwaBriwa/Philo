#include "../philo.h"

//	This Function Creates Mutex and Initialyze them 
//	Also Creates Forks !

void	create_mutex(t_philo *data)
{
	size_t	a;

	a = 0;
	(*data).big_lock = ft_malloc(sizeof(pthread_mutex_t) * (*data).nbr_philo);
	(*data)._big_forks = ft_malloc(sizeof(char) * (*data).nbr_philo);
	while (a < (*data).nbr_philo)
	{
		if (pthread_mutex_init((((*data).big_lock)++), NULL))
			flush();
		(*data)._big_forks[a] = '*';
		a++;
	}
}

//	This Function Creates Threads ! And Throws Them 
//	To The Execution_Flow ! 
//	We give for each Bag an ID and an A Fork !

void	create_thread(t_philo *data)
{
	size_t	a;

	a = 0;
	(*data).big_thread = ft_malloc(sizeof(pthread_t) * (*data).nbr_philo + 1);
	(*data).big_bags = ft_malloc(sizeof(t_bag) * (*data).nbr_philo);


	while (a < (*data).nbr_philo)
	{
		((*data).big_bags)[a].id = a;
		((*data).big_bags)[a].info = data;
		((*data).big_bags)[a].fork = &((*data)._big_forks[a]);
		
		a++;
	}
	a = 0;
}

//	This Function Gets the current in a precise way Using
//	The Time in Seconds and In MicroSeconds for Better 
//	Occuracy !

size_t	current_time()
{
	// size_t	prcs;
	// struct timeval	clock;
	// gettimeofday(&clock, NULL);
	// prcs = (clock.seconds * 1000) + (clock.useconds / 1000);
	// return (prcs);
	return (1);
}
