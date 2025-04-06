/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Routines.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mir <sel-mir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 20:27:44 by sel-mir           #+#    #+#             */
/*   Updated: 2025/04/06 20:41:55 by sel-mir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

//	This Function Mimics the Sleeping Behavior !

void	thinking(t_philo *data, int id)
{
	size_t	start;

	printf("Philosopher : %d is Thinking !\n", id);
	start = current_time();
	while (current_time() - start < (((*data).die_time) / 2))
		usleep(500);
	sleeping(data, id, (current_time() - start));
}

void	sleeping(t_philo *data, int id, size_t passed)
{
	size_t	start;

	printf("Philosopher : %d is Sleeping !\n", id);
	start = current_time();
	while ((current_time() + passed) - start < (*data).slp_time)
		usleep(500);
	return;
}

void	eating(t_philo *data, int id)
{
	size_t	start;

	
	printf("Philosopher : %d is Eating !\n", id);
	start = current_time();
	while (current_time() - start < (*data).eat_time)
		usleep(500);
	return;
}
