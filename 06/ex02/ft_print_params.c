/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 00:26:29 by gsolis            #+#    #+#             */
/*   Updated: 2016/11/02 00:26:31 by gsolis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (--argc)
	{
		while (argv[j][i] != '\0')
		{
			ft_putchar(argv[j][i]);
			i += 1;
		}
		i = 0;
		j += 1;
		ft_putchar('\n');
	}
	return (0);
}
