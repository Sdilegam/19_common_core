/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 10:35:17 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 15:40:01 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief                    Write "nbr" digit by digit reccursively.
 * 
 * @param nbr                The number that needs to be written
 * @param str                A pointer to a previously allocated memory space.
 * @param index              The length of the number.
 */
static void	recc_assign(long nbr, char *str, t_size index)
{
	if (nbr >= 10)
		recc_assign(nbr / 10, str, index - 1);
	str[index] = nbr % 10 + '0';
}

/*
 * @brief                    Convert a "nbr" int to a string.
 * 
 * @param nbr                The number converted.
 * @return char*:            Pointer to the first character of the string
 *                           version of the number.
 */
char	*ft_itoa(int nbr)
{
	t_size	int_len;
	long	temp_n;
	char	*result;

	int_len = 1;
	temp_n = nbr;
	if (temp_n < 0)
		int_len++;
	while (!(nbr < 10 && nbr > -10))
	{
		nbr /= 10;
		int_len++;
	}
	result = ft_calloc(int_len + 1, 1);
	if (!result)
		return (0);
	if (nbr < 0)
	{
		result[0] = '-';
		temp_n *= -1;
	}
	recc_assign(temp_n, result, int_len - 1);
	return (result);
}
