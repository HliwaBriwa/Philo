#include "../philo.h"

void	usage()
{
	write (1, "\n./philo \"0<int1<6\" \"int2<= intmax\"  Optional : int:number of meals\n", 68);
	free_alloc(NULL, 1);
	exit(1);
}


void	flush()
{
	write (2, "\nError !\n", 9);
	free_alloc(NULL, 1);
	exit(1);
}
