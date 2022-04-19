/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 10:49:07 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 13:03:01 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * @brief                    Write "chr" ont the "fd" file descriptor
 * 
 * @param c                  The character that will be written.
 * @param fd                 The file descriptor that will be written.
 */
void	ft_putchar_fd(char chr, int fd)
{
	write(fd, &chr, 1);
}
