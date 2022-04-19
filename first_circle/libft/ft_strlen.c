/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:44:24 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 14:29:37 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief                    Returns the size of "string".
 * 
 * @param string             The string.
 * @return t_size:           The length of the string.
 */
t_size	ft_strlen(const char *string)
{
	char	*start;

	start = (char *)string;
	while (*string)
		string++;
	return (string - start);
}
