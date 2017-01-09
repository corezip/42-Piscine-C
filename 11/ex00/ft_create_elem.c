/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 00:34:07 by gsolis            #+#    #+#             */
/*   Updated: 2016/11/09 00:40:11 by gsolis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list *list;

	list = NULL;
	list = malloc(sizeof(list));
	if (list)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}
