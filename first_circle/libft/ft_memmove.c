/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 11:18:33 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 12:55:04 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief                    Same effect than ft_memcpy but works even
 *                           when the memory areas overlap.
 * 
 * @param dest               Destination of the copy.
 * @param src                Source of the copy.
 * @param n                  Number of bytes copied.
 * @return void*:            Pointer to the first byte of the copy.
 */
void	*ft_memmove(void *dest, const void *src, t_size n)
{
	t_size	index;

	if (!src && ! dest)
		return (0);
	if (src > dest)
	{
		index = 0;
		while (index != n)
		{
			((char *)dest)[index] = ((char *)src)[index];
			index ++;
		}
	}
	else
	{
		index = n;
		while (index != 0)
		{
			index --;
			((char *)dest)[index] = ((char *)src)[index];
		}
	}
	return (dest);
}
