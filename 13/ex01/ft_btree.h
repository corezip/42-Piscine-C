/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsolis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 13:30:27 by gsolis            #+#    #+#             */
/*   Updated: 2016/11/10 13:30:28 by gsolis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H
# include <stdlib.h>

typedef	struct			s_btree
{
	struct s_btree		*left;
	struct s_btree		*right;
	void				*item;
}						t_btree;

#endif
