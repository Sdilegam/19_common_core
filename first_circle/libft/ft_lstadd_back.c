/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:14:31 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 12:24:56 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief                    Add the "new" element at the back of the list.
 * 
 * @param alst               Pointer to the pointer pointing to
 *                           the first element of the list.
 * @param new                the new elemet that will be added.
 */
void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (*alst == 0)
		*alst = new;
	else
		ft_lstlast(*alst)->next = new;
}
