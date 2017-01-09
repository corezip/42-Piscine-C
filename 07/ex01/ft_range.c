/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 15:37:19 by gsolis            #+#    #+#             */
/*   Updated: 2016/11/02 15:37:21 by gsolis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *int_array;

	i = 0;
	if (max > min)
	{
		int_array = (int*)malloc(sizeof(*int_array) * (max - min));
		while (min < max)
		{
			int_array[i] = min;
			min += 1;
			i += 1;
		}
		return (int_array);
	}
	return (0);
}
