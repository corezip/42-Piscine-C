/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 11:43:25 by gsolis            #+#    #+#             */
/*   Updated: 2016/10/29 11:43:28 by gsolis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int factional;

	factional = 1;
	i = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (nb >= i)
	{
		factional *= i;
		i += 1;
	}
	return (factional);
}
