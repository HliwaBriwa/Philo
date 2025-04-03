#include "../philo.h"

void    parsing(int ac, char **av)
{
	if (ac != 3 && ac != 4)
		usage();
	if(isdigit(av[1]) || isdigit(av[2]))
		usage();
	ft_atoi(av[1]);
	ft_atoi(av[2]);
	if (ac == 4)
	{
		if (isdigit(av[3]))
			usage();
		ft_atoi(av[3]);
	}
}

void	flush()
{
	write (2, "\nError !\n", 9);
	exit(1);

}

