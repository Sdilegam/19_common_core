/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 11:18:33 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 12:57:30 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief                    Sets the first "n" bytes of "pointer" to "chr".
 * 
 * @param ptr                First byte of the memory area that needs to
 *                           be changed.
 * @param chr                The character the will be put.
 * @param n                  The number of bytes changed.
 * @return void*:            pointer to the first byte changed.
 */
void	*ft_memset(void *ptr, int chr, t_size n)
{
	while (0 != n)
		((char *)ptr)[--n] = chr;
	return (ptr);
}
