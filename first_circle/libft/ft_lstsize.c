/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:02:38 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 14:28:09 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief                    Rreturns the length of a "t_list" list.
 * 
 * @param lst                The first element of the list.
 * @return int:              The length of the list.
 */
int	ft_lstsize(t_list *lst)
{
	int	count;

	if (lst == 0)
		return (0);
	count = 0;
	while (lst->next)
	{
		count ++;
		lst = lst->next;
	}
	count ++;
	return (count);
}
