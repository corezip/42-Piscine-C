/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 23:01:01 by gsolis            #+#    #+#             */
/*   Updated: 2016/10/29 23:01:05 by gsolis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		ft_sqrt(int nb)
{
	int root;

	root = 0;
	if (nb < 0)
	{
		return (0);
	}
	while ((root * root) < nb)
	{
		root += 1;
	}
	return (root);
}

int main(void)
{
	printf("%d",ft_sqrt(5));
	return (0);
}
