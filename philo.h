 #ifndef PHILO_H
#define PHILO_H

 # include <unistd.h>
 # include <stdio.h>
 # include <stdlib.h>
 # include <limits.h>
 # include <pthread.h>

typedef struct	s_philo
{
	size_t	nbr_philo;
	size_t	mst_eat;

	size_t	die_time;
	size_t	eat_time;
	size_t	slp_time;

	pthread_mutex_t	*big_lock;
	struct t_philo	*philoz;
	
} t_philo;

t_philo	*parsing(int ac, char **av);

void	flush();
void	usage();
void	*ft_malloc(size_t a);
void	*free_alloc(void *p, int flag);
void	create_mutex(t_philo *data);
void	create_philo(t_philo *data);



int		is_digit(char *str);
int		ft_atoi(char *str);
int		ft_cmplt(void);



#endif
