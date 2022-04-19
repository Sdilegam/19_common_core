/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 07:38:41 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 12:29:21 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
 * @brief                    Deletes and free the memory of the element
 *                           pointed to by "lst" and every element behind it.
 *                           At the end, lst is pointing to NULL.
 * 
 * @param lst                Pointer to the pointer of the first element that
 *                           will be deleted.
 * @param del                Function used to delete the content of
 *                           the elements.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	temp = *lst;
	while ((*lst)->next)
	{
		del((*lst)->content);
		temp = (*lst)->next;
		free(*lst);
		*lst = temp;
	}
	del((*lst)->content);
	free(*lst);
	*lst = 0;
}
