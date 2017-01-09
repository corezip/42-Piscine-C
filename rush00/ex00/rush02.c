/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 18:11:58 by gsolis            #+#    #+#             */
/*   Updated: 2016/10/30 18:12:01 by gsolis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char a);
void	rush_print(int hor, int ver, int x, int y);

int		rush(int x, int y)
{
	int ver;
	int hor;

	ver = 0;
	hor = 0;
	if ((x <= 0) || (y <= 0))
		return (0);
	while (ver < y)
	{
		while (hor < x)
		{
			rush_print(hor, ver, x, y);
			hor++;
		}
		hor = 0;
		ft_putchar('\n');
		ver++;
	}
	return (0);
}

void	rush_print(int hor, int ver, int x, int y)
{
	if ((ver == 0 && hor == 0))
		ft_putchar('A');
	else if ((hor == x - 1 && ver == y - 1) || (hor == 0 && ver == y - 1))
		ft_putchar('C');
	else if ((ver == 0 && hor == x - 1))
		ft_putchar('A');
	else if ((ver == 0) || (ver == y - 1) || (hor == 0 || (hor == x - 1)))
		ft_putchar('B');
	else
		ft_putchar(' ');
}
