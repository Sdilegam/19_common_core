/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 11:02:55 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 14:28:20 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief                    Append "src" to "dest" in a way that "dest" will
 *                           never have more than "dest_size" - 1 character.
 * 
 * @param dest               The string of destination.
 * @param src                The string that will append "dest".
 * @param dest_size          The size of "dest"'s memory area. Should be
 *                           longer than the length of the string pointed
 *                           to by "dest".
 * @return t_size:           The length of the string the function
 *                           tried to create.
 */
t_size	ft_strlcat(char *dest, const char *src, t_size dest_size)
{
	t_size	dest_len;
	t_size	src_len;
	t_size	index;

	index = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_size != 0 && dest_len < dest_size)
	{
		dest += dest_len;
		while (index != dest_size - dest_len - 1 && src[index])
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
		return (dest_len + src_len);
	}
	return (dest_size + src_len);
}
