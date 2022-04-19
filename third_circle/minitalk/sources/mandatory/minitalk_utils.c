/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:47:30 by sdi-lega          #+#    #+#             */
/*   Updated: 2022/04/07 17:58:36 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_atoi(const char *str)
{
	unsigned long long	answer;
	unsigned int		index;

	answer = 0;
	index = 0;
	while (str[index] >= '0' && '9' >= str[index])
	{
		answer = answer * 10 + str[index++] - 48;
		if (answer >= 9223372036854775807)
			return (-1);
	}
	return (answer);
}
