#include "../philo.h"

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
		if (res > 2 || res < -2)
			error_float();
	}
	return (sign * res);
}

static int	ft_cmplt(void)
{
	write(1, "\nOverFlow  !\n", 13);
	exit(1);
}

int	isdigit(char *str)
{
	int	a;

	a = 1;
	if (str[0] != '-' && str[0] != '+' && !(str[0] <= '9' && str[0] >= '0'))
		return (1);
	while (str[a])
	{
		if (!(str[a] <= '9' && str[a] >= '0'))
			return (1);
		a++;
	}
	return (0);
}