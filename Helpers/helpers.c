#include "../philo.h"

void	usage()
{
	write (1, "\n./philo \"0<int1<6\" \"int2<= intmax\"  Optional : int:number of meals\n", 68);
	free_alloc(NULL, 1);
	exit(1);
}

//	This function Checks if Fork is free using the 
//	the bag of The thread !

int	is_even(t_bag *bag)
{
	if (!((*bag).id %2))
		return(0);
	return (1);
}

void	link_it(t_philo *data)
{
	size_t	a;
	t_bag *bag_array;

	a = 1;
	bag_array = (*data).big_bags;
	if ((*data).nbr_philo == 1)
		return;
	(*bag_array).before = &bag_array[(*data).nbr_philo - 1];
	(*bag_array).next = &bag_array[1];
	while (a < ((*data).nbr_philo - 1))
	{
		(bag_array[a]).next= &bag_array[a + 1];
		(bag_array[a]).before= &bag_array[a - 1];
		a++;
	}
	bag_array[((*data).nbr_philo - 1)].next = bag_array;
	bag_array[((*data).nbr_philo - 1)].before = &bag_array[a - 1];
}
