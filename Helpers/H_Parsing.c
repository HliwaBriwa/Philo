#include "../philo.h"

t_philo	*parsing(int ac, char **av)
{
	t_philo	*alpha;

	alpha = ft_malloc(sizeof(t_philo));

	// printf("\nac %d\n", ac);
	if (ac != 5 && ac != 6)
		usage();



	if(is_digit(av[1]) || is_digit(av[2])
			|| is_digit(av[3]) || is_digit(av[4]))
		usage();
	(*alpha).nbr_philo = ft_atoi(av[1]);
	(*alpha).die_time = ft_atoi(av[2]);
	(*alpha).eat_time = ft_atoi(av[3]);
	(*alpha).slp_time = ft_atoi(av[4]);
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
	return (alpha);
}

int	ft_cmplt(void)
{
	write(1, "\nOverFlow  !\n", 13);
	exit(1);
}

int	ft_atoi(char *str)
{
	int			a;
	double		res;
	int			sign;

	sign = 1;
	res = 0;
	a = 0;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			sign *= -1;
		a++;
	}
	while (str[a] <= '9' && str[a] >= '0')
	{
		if ((sign == 1 && res > (INT_MAX - (str[a] - '0')) / 10)
			|| (res > (INT_MIN + (str[a] - '0')) / -10 && sign == -1))
			return (ft_cmplt());
		res = res * 10 + str[a++] - 48;
	}
	return (sign * res);
}

int	is_digit(char *str)
{
	int	a;

	a = 0;
	if (str[a] == '+' || str[a] == '-')
		a++;
	while (str[a])
	{
		if (!(str[a] <= '9' && str[a] >= '0'))
			return (1);
		a++;
	}
	return (0);
}
