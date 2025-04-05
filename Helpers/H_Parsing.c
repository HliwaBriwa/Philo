#include "../philo.h"

void    parsing(int ac, char **av)
{
	t_philo	(*alpha);

	if (ac != 5 && ac != 6)
		usage();
	if(is_digit(av[1]) || is_digit(av[2]
			|| is_digit(av[3] || is_digit(av[4]))))
		usage();
	(*alpha).nbr_philo = ft_atoi(av[1]);
	(*alpha).die_time = ft_atoi(av[2]);
	(*alpha).eat_time = ft_atoi(av[3]);
	(*alpha).slp_time = ft_atoi(av[4]);
		usage();
	if (!(*alpha).nbr_philo || !(*alpha).die_time
			|| !(*alpha).eat_time || !(*alpha).slp_time)
		usage();
	if (ac == 6)
	{
		if (is_digit(av[5]))
			usage();
		(*alpha).mst_eat = ft_atoi(av[5]);
		if (!(*alpha).mst_eat)
			usage();
	}
}

void	flush()
{
	write (2, "\nError !\n", 9);
	exit(1);
}
