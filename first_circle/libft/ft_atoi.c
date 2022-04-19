/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 12:33:23 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 12:13:50 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief                    Checks if "chr" is a space as defined by 
 *                           isspace().
 * 
 * @param chr                The character.
 * @return int:              (1) if "character" is a space,
 *                           (0) if it is not
 */
static int	ft_isspace(char chr)
{
	if (chr == ' ' || (chr >= '\t' && chr <= '\r'))
		return (1);
	return (0);
}

/*
 * @brief                    Converts a string into an int.
 * 
 * @param string             String containing the number.
 * @return int:              The corresponding int.
 */
int	ft_atoi(const char *string)
{
	unsigned long long	answer;
	t_size				index;
	int					sign;

	answer = 0;
	index = 0;
	sign = 1;
	while (ft_isspace(string[index]))
		index++;
	if (string[index] == '+' || string[index] == '-')
	{
		if (string[index] == '-')
			sign *= -1;
		index++;
	}
	while (ft_isdigit(string[index]))
	{
		answer = answer * 10 + string[index++] - 48;
		if (answer >= 9223372036854775807 && sign == 1)
			return (-1);
		if (answer > 9223372036854775807 && sign == -1)
			return (0);
	}
	return ((answer * sign));
}
