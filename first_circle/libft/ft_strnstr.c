/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 12:07:14 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 14:41:29 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief                    Finds the first occurence of "little" in
 *                           the "len" firsts characters of "big".
 * 
 * @param big                String where "little" is searched.
 * @param little             String searched in "big".
 * @param len                Number of characters parsed.
 * @return char*:            Pointer of the first character of the first
 *                               occurence of "little",
 *                           poiter to "big" if "little" is empty and
 *                           NULL if there qre no occurence.
 */
char	*ft_strnstr(const char	*big, const char *little, t_size len)
{
	t_size	index;
	t_size	offset;

	if (*little == '\0')
		return ((char *)big);
	index = 0;
	offset = 0;
	while (big[index] && index < len)
	{
		while (big[index + offset] == little[offset] && index < len)
		{
			if (!big[index + offset])
				break ;
			offset ++;
			if (!little[offset] && index + offset <= len)
				return ((char *)&big[index]);
		}
		offset = 0;
		index++;
	}
	return (0);
}
