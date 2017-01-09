/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 11:54:27 by gsolis            #+#    #+#             */
/*   Updated: 2016/10/29 11:54:30 by gsolis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if ((nb <= 0) || (nb >= 12))
		return (0);
	if (nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

void	test(int num)
{
	printf("%d! = %d\n", num, ft_recursive_factorial(num));
}

int		main(void)
{
	test(13);
	test(12);
	test(5);
	test(1);
	test(0);
	test(-1);
	test(-500);
	test(23552345);

	return (0);
}