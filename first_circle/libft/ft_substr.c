/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:58:22 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 15:01:55 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief                    Creates the substring of "str" that starts "start"
 *                           character further and of max size "len".
 * 
 * @param str                The original string.
 * @param start              The index where the substring is located.
 * @param len                The length of the new string.
 * @return char*:            A pointer to the substring, 
 *                           NULL if something fails.
 */
char	*ft_substr(char const *str, unsigned int start, t_size len)
{
	t_size	len_str;
	char	*result;

	if (!str)
		return (0);
	len_str = ft_strlen(str);
	if (start >= len_str)
		return (ft_calloc(1, 1));
	if (len_str > (start + len))
		result = ft_calloc(len + 1, 1);
	else
		result = ft_calloc(len_str - start + 1, 1);
	if (result == 0)
		return (0);
	ft_strlcpy(result, str + start, len + 1);
	return (result);
}
