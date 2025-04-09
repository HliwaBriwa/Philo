/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Routines.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mir <sel-mir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 20:27:44 by sel-mir           #+#    #+#             */
/*   Updated: 2025/04/09 17:53:26 by sel-mir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

//	This Function Mimics the Sleeping Behavior !

void	thinking(t_bag *data)
{
	size_t	start;

	printf("Philosopher : %d is Thinking !\n", (*data).id);
	start = current_time();
	while (current_time() - start < (*((*data).info)).die_time / 2)
		usleep(500);
	sleeping(data, (current_time() - start));
}

void	sleeping(t_bag *data, size_t passed)
{
	size_t	start;

	printf("Philosopher : %d is Sleeping !\n", (*data).id);
	start = current_time();
	while ((current_time() + passed) - start < (*((*data).info)).die_time)
		usleep(500);
	return;
}

//	This function Mimics the Eatign Behavior 
//	if other thread access it we get Race Condition !

void	eating(t_bag *data, char *fork1, char *fork2)
{
	size_t	start;

	

	pthread_mutex_lock(fork1);
	pthread_mutex_lock(fork2);
	printf("Philosopher : %d is Eating !\n", (*data).id);
	start = current_time();
	while (current_time() - start < (*((*data).info)).eat_time)
		usleep(500);
	pthread_mutex_unlock(fork1);
	pthread_mutex_unlock(fork2);
	return;
}
