/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 16:43:04 by gsolis            #+#    #+#             */
/*   Updated: 2016/10/31 19:15:41 by gsolis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	if (*str == '\0')
		return (0);
	else if (*to_find == '\0')
		return (str);
	else if ((*str == *to_find) && (ft_strstr(str + 1, to_find + 1) == str + 1))
		return (str);
	else
		return (ft_strstr(str + 1, to_find));
}
