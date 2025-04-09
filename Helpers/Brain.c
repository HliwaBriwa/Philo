/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mir <sel-mir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:07:43 by sel-mir           #+#    #+#             */
/*   Updated: 2025/04/09 17:55:50 by sel-mir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../philo.h"

void	*brain(void *bagg)
{
	int		a;
	t_bag	*bag;
	t_philo	*info;

	bag = (t_bag*)bagg;
	info = (*bag).info;
	((*info)._big_forks)[a]
	if (&(((*info)._big_forks)[(*bag).id]) && &(((*info)._big_forks)[((*bag).id) + 1]))
		eating(bag, &(((*info)._big_forks)[(*bag).id]), &(((*info)._big_forks)[((*bag).id) + 1]));
	return (NULL);
}
