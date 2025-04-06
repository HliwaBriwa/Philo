#include "philo.h"

void	engine(t_philo *data)
{
	create_mutex(data);
	create_philo(data);
}

int main(int ac, char **av)
{
    Engine(parsing(ac, av));
}
