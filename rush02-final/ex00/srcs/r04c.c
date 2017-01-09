/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r04c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 14:40:37 by gsolis            #+#    #+#             */
/*   Updated: 2016/11/13 14:40:38 by gsolis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	get_corner(int a, int b, int width, int length)
{
	if ((a == b) || ((a == (width - 1)) && (b == (length - 1))))
		return ('A');
	return ('C');
}

int		r04c(int width, int length, char **input)
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
				if (get_corner(x, y, width, length) != input[y][x])
					return (0);
			}
			else if (num_sides(x, y, width, length) == 1)
			{
				if (input[y][x] != 'B')
					return (0);
			}
			else if (input[y][x] != ' ')
				return (0);
		}
	}
	return (1);
}
