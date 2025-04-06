#include "../philo.h"

void	create_mutex(t_philo *data)
{
	(*data).big_lock = ft_malloc(sizeof(pthread_mutex_t) * (*data).nbr_philo);
}

void	create_philo(t_philo *data)
{
	pthread_mutex_t	*philoz;

	philoz = ft_malloc(sizeof(t_philo) * (*data).nbr_philo);
}
