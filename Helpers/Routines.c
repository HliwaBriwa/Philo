/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Routines.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mir <sel-mir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 20:27:44 by sel-mir           #+#    #+#             */
/*   Updated: 2025/04/11 20:21:51 by sel-mir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

//	This Function Mimics the Sleeping Behavior !

void	thinking(t_bag *data, size_t passed)
{
	size_t	start;

	start = current_time();
	printf("Philosopher : %d is Thinking !\n", (*data).id);
	while ((current_time() + passed) - start < (*((*data).info)).die_time)
		usleep(500);
}

void	sleeping(t_bag *data)
{
	size_t	start;

	start = current_time();
	printf("Philosopher : %d is Sleeping !\n", (*data).id);
	while ((current_time()) - start < (*((*data).info)).die_time / 2)
		usleep(500);
	thinking(data, (current_time() - start));
	
	return;
}

//	This function Mimics the Eatign Behavior 
//	if other thread access it we get Race Condition !

void	eating(t_bag *bag, pthread_mutex_t *mutex1, pthread_mutex_t *mutex2)
{
	size_t	start;

	start = current_time();
	(*bag).free = 1;
	(*((*bag).before)).free = 1;
	pthread_mutex_lock(mutex1);
	pthread_mutex_lock(mutex2);
	printf("Philosopher : %d is Eating !\n", (*bag).id);
	while (current_time() - start < (*((*bag).info)).eat_time)
		usleep(500);
	pthread_mutex_unlock(mutex1);
	pthread_mutex_unlock(mutex2);
	(*bag).free = 0;
	return;
}
