/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mir <sel-mir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:07:43 by sel-mir           #+#    #+#             */
/*   Updated: 2025/04/11 14:39:14 by sel-mir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../philo.h"

// void	testing(t_bag *data)
// {
// 	size_t	a;
	
// 	a = 0;

// 	while (1)
// 	{
// 		printf("\nThe id is : %d The fork  is : %c\n", (*data).id, *((*data).fork));
// 		data = (*data).next;
// 		a++;
// 	}
// }


void	*brain(void *bagg)
{
	t_bag	*bag;
	t_philo	*info;
	int			a;
	static	int	a;

	bag = (t_bag*)bagg;
	info = (*bag).info;

	if (!a)
	{
		while (a < (*(*bag).info).nbr_philo)
		{
			if (is_free(bag) && is_free((*bag).before))
				eating(bag, (*bag).lock, (*((*bag).next)).lock);
				a++;
		}
		a++;
	}
	else
	{
		
	}
	return (NULL);
}
