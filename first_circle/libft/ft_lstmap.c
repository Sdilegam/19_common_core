/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 07:38:41 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 12:38:13 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
 * @brief                    Applies  the "function" function to the content
 *                           of every element of the "lst" list and put the
 *                           results in a new list.
 * 
 * @param lst                First element of the list.
 * @param function           The function that will be applied to
 *                           every element.
 * @param del                A function that can delete an element if needed.
 * @return t_list*:          Returns the first element of the created list.
 */
t_list	*ft_lstmap(t_list *lst, void *(*function)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*answ;

	if (!lst)
		return (0);
	new = ft_lstnew(function(lst->content));
	if (!new)
		return (0);
	(void)del;
	answ = new;
	lst = (lst)->next;
	while (lst)
	{	
		new ->next = ft_lstnew(function(lst->content));
		lst = (lst)->next;
		if (!new->next)
			return (0);
		new = new->next;
		if (!new)
			return (0);
	}
	return (answ);
}
