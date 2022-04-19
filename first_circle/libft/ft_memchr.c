/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 12:07:14 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/28 09:27:10 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief                    Search the first occurence of "chr" in
 *                           the first "n" bytes of the "str" string.
 * 
 * @param str                The string that will be parsed.
 * @param chr                the character that must be found.
 * @param n                  The number of bytes parsed.
 * @return char*:            A pointer to the first occurence of "chr", 
 *                           (0) if "chr" cannot be found or n == 0.
 */
void	*ft_memchr(const void *str, int chr, t_size n)
{
	t_size	index;

	if (n == 0)
		return (0);
	index = 0;
	while (index < n)
		if (((unsigned char *)str)[index++] == (unsigned char)chr)
			return ((char *)str + index - 1);
	return (0);
}
