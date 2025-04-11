#include "philo.h"

void	engine(t_philo *data)
{
	create_mutex(data);
	init_thread(data);
	create_thread(data);
	exit(1);

}

int main(int ac, char **av)
{
    engine(parsing(ac, av));
}
