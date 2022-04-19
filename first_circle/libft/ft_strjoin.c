/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:58:22 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 14:11:19 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
 * @brief                    Merge "s2" to "s1".
 * 
 * @param s1                 The string that will begin the new string.
 * @param s2                 The string that will end the new string.
 * @return char*:            " "s1" + "s2" " or,
 *                           NULL if the allocation failed.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	t_size	len_s1;
	t_size	len_s2;
	char	*result;

	if (!s1 || !s2)
		return (0);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	result = malloc(len_s1 + len_s2 + 1);
	if (result == 0)
		return (0);
	ft_strlcpy(result, s1, len_s1 + 1);
	ft_strlcat(result, s2, len_s1 + len_s2 + 1);
	return (result);
}
