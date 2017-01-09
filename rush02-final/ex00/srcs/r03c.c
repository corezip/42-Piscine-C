/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r03c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 14:40:29 by gsolis            #+#    #+#             */
/*   Updated: 2016/11/13 14:40:31 by gsolis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	get_corner_03(int x)
{
	if (x == 0)
		return ('A');
	else
		return ('C');
}

int		r03c(int w, int l, char **input_array)
{
	int	x;
	int y;

	y = -1;
	while (++y < l)
	{
		x = -1;
		while (++x < w)
		{
			if (num_sides(x, y, w, l) == 2)
			{
				if (get_corner_03(x) != input_array[y][x])
					return (0);
			}
			else if (num_sides(x, y, w, l) == 1)
			{
				if (input_array[y][x] != 'B')
					return (0);
			}
			else if (input_array[y][x] != ' ')
				return (0);
		}
	}
	return (1);
}
