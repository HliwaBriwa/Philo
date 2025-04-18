/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   garbage_collector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mir <sel-mir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 08:21:26 by sel-mir           #+#    #+#             */
/*   Updated: 2025/04/07 18:55:37 by sel-mir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	*ft_malloc(size_t a)
{
	void	*p;

	p = malloc(a);
	if (!p)
		flush();
	else
		free_alloc(p, 0);
	return (p);
}

void	*free_alloc(void *p, int flag)
{
	static void	**alpha;
	static int	a;
	int			j;

	if (!alpha)
	{
		alpha = malloc(sizeof(void *) * INT_MAX);
		if (!alpha)
			return (NULL);
	}
	if (flag && alpha)
	{
		j = 0;
		while (j < a)
		{
			free(alpha[j]);
			j++;
		}
		free(alpha);
		a = 0;
	}
	else if (!flag && alpha)
		alpha[a++] = p;
	return (NULL);
}

void	flush()
{
	write (2, "\nError !\n", 9);
	free_alloc(NULL, 1);
	exit(1);
}
