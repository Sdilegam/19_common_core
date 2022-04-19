/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 11:18:33 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 12:52:55 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief                    Copies "n" bytes from memory area "src"
 *                           to memory area "dst".
 * 
 * @param dest               Destination of the copy.
 * @param src                Source of the copy.
 * @param n                  Number of bytes copied.
 * @return void*:            Pointer to the first character of "dest",
 *                           (0) if "src" or "dest" is NULL.
 */
void	*ft_memcpy(void *dest, const void *src, t_size n)
{
	if (!src && !dest)
		return (0);
	while (0 != n--)
		((char *)dest)[n] = ((char *)src)[n];
	return (dest);
}
