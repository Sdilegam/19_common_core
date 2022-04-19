/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 10:33:34 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 14:31:05 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief                    Applies "function" to every character of "string".
 *                           and store the result in an other string.
 * 
 * @param string             The original string.
 * @param function           The function that will be applied to every
 *                           character of the string.
 * @return char*:            The string created.
 */
char	*ft_strmapi(char const *string, char (*function)(unsigned int, char))
{
	char	*result;
	t_size	index;

	if (!string || !function)
		return (0);
	index = 0;
	result = ft_calloc(ft_strlen(string) + 1, 1);
	if (!result)
		return (0);
	while (string[index])
	{
		result[index] = function(index, string[index]);
		index ++;
	}
	return (result);
}
