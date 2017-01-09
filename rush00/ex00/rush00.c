/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 23:49:05 by gsolis            #+#    #+#             */
/*   Updated: 2016/10/29 23:49:08 by gsolis           ###   ########.fr       */
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
		ft_putchar('o');
	else if ((hor == 0 && ver == y - 1) || (hor == x - 1 && ver == 0))
		ft_putchar('o');
	else if ((ver == y - 1 && hor == x - 1))
		ft_putchar('o');
	else if ((ver == 0) || (ver == y - 1))
		ft_putchar('-');
	else if ((hor == 0) || (hor == x - 1))
		ft_putchar('|');
	else
		ft_putchar(' ');
}
