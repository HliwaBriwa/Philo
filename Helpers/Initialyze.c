#include "../philo.h"

void	create_mutex(t_philo *data)
{
	(*data).big_lock = ft_malloc(sizeof(pthread_mutex_t) * (*data).nbr_philo);
}

void	create_thread(t_philo *data)
{
	(*data).big_thread = ft_malloc(sizeof(t_philo) * (*data).nbr_philo);
}

size_t	current_time()
{
	size_t	prcs;
	t_timeval	clock;
	gettimeofday(&clock, NULL);
	prcs = (clock.seconds * 1000) + (clock.useconds / 1000);
	return (prcs);
}
