/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 12:07:13 by gsolis            #+#    #+#             */
/*   Updated: 2016/10/31 12:07:15 by gsolis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int i;
	int number;
	int sign_unsigned;

	i = 0;
	number = 0;
	sign_unsigned = 1;
	if (str == ('\0'))
		return (0);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign_unsigned = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (number * sign_unsigned);
}


int		main(void)
{
	int i;
	int x;

	i = atoi("  -56 ");
	x = ft_atoi(" -56 ");
	printf("%d <-- atoi\n%d <-- ft_atoi", i, x);
}
