/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r00c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 14:39:50 by gsolis            #+#    #+#             */
/*   Updated: 2016/11/13 14:39:53 by gsolis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	get_side(int a, int width)
{
	if ((a == 0) || (a == (width - 1)))
		return ('|');
	return ('-');
}

int		r00c(int width, int length, char **input)
{
	int		x;
	int		y;

	y = -1;
	while (++y < length)
	{
		x = -1;
		while (++x < width)
		{
			if (num_sides(x, y, width, length) == 2)
			{
				if (input[y][x] != 'o')
					return (0);
			}
			else if (num_sides(x, y, width, length) == 1)
			{
				if (input[y][x] != get_side(x, width))
					return (0);
			}
			else if (input[y][x] != ' ')
				return (0);
		}
	}
	return (1);
}
