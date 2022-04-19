/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:31:45 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 13:01:54 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
 * @brief                    Allocate "count" times "size" bytes of memory
 *                           and set those bytes to '\\0'.
 * 
 * @param count              Number of object of "size" bytes created.
 * @param size               Numer of bytes of each object.
 * @return void*:            A pointer to the first byte of the memory created.
 */
void	*ft_calloc(t_size count, t_size size)
{
	void	*result;

	result = malloc(count * size);
	if (result == 0)
		return (0);
	ft_bzero(result, count * size);
	return (result);
}
