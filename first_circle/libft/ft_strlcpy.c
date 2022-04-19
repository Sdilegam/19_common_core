/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 11:02:55 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 14:27:32 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief                    Copies the string "src" to "dest".
 * 
 * @param dest               The memory area where "src" will be copied
 * @param src                The string that will be copied.
 * @param dest_size          The size of the memory area "dest".
 * @return t_size:           The length of the "src" string.
 */
t_size	ft_strlcpy(char *dest, const char *src, t_size dest_size)
{
	t_size	index;

	index = 0;
	if (dest_size == 0)
		return (ft_strlen(src));
	while (index != dest_size - 1 && src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (ft_strlen(src));
}
