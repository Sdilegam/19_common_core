/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 11:21:42 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 13:02:57 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
 * @brief                    Write "number" ont the "fd" file descriptor
 * 
 * @param number             The number that will be written.
 * @param fd                 The file descriptor that will be written.
 */
void	ft_putnbr_fd(int number, int fd)
{
	t_size	int_len;
	long	temp_number;
	int		buffer;

	int_len = 1;
	temp_number = number;
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		temp_number *= -1;
	}
	while (temp_number / int_len >= 10)
		int_len *= 10;
	while (int_len != 0)
	{
		buffer = (temp_number / int_len % 10 + '0');
		ft_putchar_fd(buffer, fd);
		int_len /= 10;
	}
}
