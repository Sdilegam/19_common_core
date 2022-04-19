/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 12:07:14 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 14:42:39 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief                    Search for the first occurence of "chr" int "str".
 * 
 * @param str                The string that will be parsed.
 * @param chr                The character searched.
 * @return char*:            A pointer to the first occurence of "chr",
 *                           NULL if "chr" is not in the string
 */
char	*ft_strchr(const char *str, int chr)
{
	t_size	index;

	index = 0;
	while (str[index])
		if (str[index++] == (char)chr)
			return ((char *)str + index - 1);
	if ((char)chr == '\0')
		return ((char *)str + index);
	return (0);
}
