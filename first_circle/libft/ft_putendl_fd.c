/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 10:49:07 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 13:02:59 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief                    Write "string" ont the "fd" file descriptor
 *                           and ends with '\\n'
 * 
 * @param string             The string that will be written.
 * @param fd                 The file descriptor that will be written.
 */
void	ft_putendl_fd(char *string, int fd)
{
	t_size	index;

	index = 0;
	if (string)
	{
		while (string[index])
			ft_putchar_fd(string[index++], fd);
		ft_putchar_fd('\n', fd);
	}
}
