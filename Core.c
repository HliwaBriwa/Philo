#include "philo.h"

void	engine(t_philo *data)
{
	create_mutex(data);
	create_thread(data);
}

int main(int ac, char **av)
{
    engine(parsing(ac, av));
}
