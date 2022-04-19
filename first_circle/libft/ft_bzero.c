/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 11:18:33 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 13:01:21 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief                    Sets "len" bytes starting at the memory pointed
 *                           to by "pointer" to '\\0'.
 * @param pointer            The first byte replaced.
 * @param len                Number of bytes that have to be changed.
 */
void	ft_bzero(void *pointer, t_size len)
{
	while (0 != len)
		((char *)pointer)[--len] = '\0';
}
