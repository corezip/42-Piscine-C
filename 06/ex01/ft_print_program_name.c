/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 00:19:54 by gsolis            #+#    #+#             */
/*   Updated: 2016/11/02 00:19:56 by gsolis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char const *argv[])
{
	argc = 0;
	while (*argv[0] != '\0')
	{
		ft_putchar(*argv[0]);
		argv[0] += 1;
	}
	ft_putchar('\n');
	return (0);
}
