/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 16:01:02 by gsolis            #+#    #+#             */
/*   Updated: 2016/10/29 16:01:26 by gsolis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (0);
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

void	test(int index)
{
	printf("%d -> %d\n", index, ft_fibonacci(index));
}

int		main(void)
{
	test(-20);
	test(-1);
	test(0);
	test(1);
	test(2);
	test(3);
	test(4);
	test(5);
	test(6);
	test(7);
	test(8);
	test(9);
	test(10);
	test(11);
	test(45);
	test(46);
	test(47); 
	test(75);
	return (0);
}