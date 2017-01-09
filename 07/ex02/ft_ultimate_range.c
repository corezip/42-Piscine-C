/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 15:39:55 by gsolis            #+#    #+#             */
/*   Updated: 2016/11/02 15:39:57 by gsolis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (max > min)
	{
		*range = (int*)malloc(sizeof(int) * (max - min));
		if (*range != '\0')
		{
			while (min < max)
			{
				(*range)[i] = min;
				min += 1;
				i += 1;
			}
		}
		return (i);
	}
	return (0);
}

int main(void)
{
    int *buffer;
    printf("%d", ft_ultimate_range(&buffer, 1, 10));
    return 0;
}
