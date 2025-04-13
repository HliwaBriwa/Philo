/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mir <sel-mir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:07:43 by sel-mir           #+#    #+#             */
/*   Updated: 2025/04/12 22:36:46 by sel-mir          ###   ########.fr       */
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

	bag = (t_bag*)bagg;
	info = (*bag).info;
	if (!is_even((*bag).id) && !is_free((*((*bag).before)).id))
		eating(bag, (*bag).lock, (*(*bag).before).lock);
	return (NULL);
}

void	redo(t_bag *bag)
{
	if (!is_free((*bag).free) && !is_free((*(*bag).before).free))
		eating(bag, (*bag).lock, (*(*bag).before).lock);
}
