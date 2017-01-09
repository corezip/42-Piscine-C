/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:03:14 by gsolis            #+#    #+#             */
/*   Updated: 2016/11/07 17:03:19 by gsolis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	*mytab;
	int	i;

	i = 0;
	mytab = (int*)malloc(sizeof(*tab) * length);
	while (i < length)
	{
		mytab[i] = f(tab[i]);
		i += 1;
	}
	return (mytab);
}
