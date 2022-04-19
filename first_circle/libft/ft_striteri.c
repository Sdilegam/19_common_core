/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 10:33:34 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 14:07:09 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief                    Applies "function" to every character of "string".
 * 
 * @param string             The string.
 * @param function           The function that will be applied to every
 *                           character of the string.
 */
void	ft_striteri(char *string, void (*function)(unsigned int, char *))
{
	t_size	index;

	index = 0;
	if (string)
	{
		while (string[index])
		{
			function(index, &string[index]);
			index ++;
		}
	}
}
