/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:45:21 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 14:35:25 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief                    Compares byte string str1 against byte string
 *                           str2. Both strings are assumed to be n bytes long.
 * 
 * @param str1               First byte string compared.
 * @param str2               Second byte string compared.
 * @param n                  Length of the byte strings.
 * @return int:              Returns the difference between the first two
 *                               differing bytes,
 *                           (0) if they are identical.
 */
int	ft_memcmp(const void *str1, const void *str2, t_size n)
{
	t_size			index;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	index = 0;
	while (index < n)
	{
		if (s1[index] != s2[index])
			break ;
		index ++;
	}
	if (index == n)
		return (0);
	return (s1[index] - s2[index]);
}
