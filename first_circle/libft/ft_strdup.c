/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:42:12 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 14:04:39 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief                    Creates a copy of "s1"
 * 
 * @param s1                 The string tha will be copied.
 * @return char*:            A poiter to the newly created strimg,
 *                           NULL if the allocation failed.
 */
char	*ft_strdup(const char *s1)
{
	char	*result;
	t_size	len;

	len = ft_strlen(s1) + 1;
	result = ft_calloc(len, 1);
	if (!result)
		return (0);
	ft_strlcpy(result, s1, len);
	return (result);
}
