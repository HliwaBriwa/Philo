 #ifndef PHILO_H
#define PHILO_H

 # include <unistd.h>
 # include <stdio.h>
 # include <stdlib.h>
 # include <limits.h>
 # include <pthread.h>

typedef struct	s_philo
{
	int	nbr_philo;
	int		mst_eat;

	size_t	die_time;
	size_t	eat_time;
	size_t	slp_time;

	pthread_mutex_t	*mutex1;
	
} t_philo;

void    parsing(int ac, char **av);
void	flush();
void	usage();


int		is_digit(char *str);
int		ft_atoi(char *str);
int		ft_cmplt(void);



#endif
