/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:45:21 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 14:43:14 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief                    Compares the "n" firsts characters of the null-
 *                           terminated strings "s1" and "s2".
 * 
 * @param s1                 First string.
 * @param s2                 Second string.
 * @param n                  Number or characters compared
 * @return int:              Returns the difference between the first two
 *                               differing character,
 *                           (0) if they are identical.
 */
int	ft_strncmp(const char *s1, const char *s2, t_size n)
{
	t_size	index;

	index = 0;
	if (n == 0)
		return (0);
	while (s1[index] && s2[index])
	{
		if ((unsigned char) s1[index] != (unsigned char) s2[index])
			break ;
		index++;
		if (index == n)
			return (0);
	}
	return ((unsigned char) s1[index] - (unsigned char) s2[index]);
}
