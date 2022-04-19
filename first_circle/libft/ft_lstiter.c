/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 07:38:41 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 12:32:27 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief                    Applies the "function" to the content of lst and
 *                           every elements behind it
 * 
 * @param lst                The first element.
 * @param function           The function that will apply to every 
 *                           elements' content
 */
void	ft_lstiter(t_list *lst, void (*function)(void *))
{
	while (lst)
	{
		function(lst->content);
		lst = lst->next;
	}
}
