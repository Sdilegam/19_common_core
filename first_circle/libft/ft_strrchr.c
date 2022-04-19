/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 12:07:14 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 14:42:07 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief                    Search for the last occurence of "chr" int "str".
 * 
 * @param str                The string that will be parsed.
 * @param chr                The character searched.
 * @return char*:            A pointer to the last occurence of "chr",
 *                           NULL if "chr" is not in the string
 */
char	*ft_strrchr(const char *str, int chr)
{
	t_size	index;
	char	*last_occ;

	index = 0;
	last_occ = 0;
	while (str[index])
		if (str[index++] == (char)chr)
			last_occ = (char *)(str + index - 1);
	if ((char)chr == '\0')
		last_occ = (char *)(str + index);
	return (last_occ);
}
