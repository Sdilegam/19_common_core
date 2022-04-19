/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:43:04 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 15:37:16 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
 * @brief                    Gets the number of characters that need to be
 *                           deleted at the beginning of the string.
 * 
 * @param s1                 The original string.
 * @param set                The characters that have to be deleted.
 * @return int:              Number of characters that need to be deleted.
 */
static int	get_begining_len(char const *s1, char const *set)
{
	t_size	len;
	t_size	index;

	index = 0;
	len = 0;
	while (s1[len])
	{
		while (set[index])
		{
			if (s1[len] == set[index])
				break ;
			else
				index++;
		}
		if (s1[len] != set[index])
			return (len);
		index = 0;
		len++;
	}
	return (len);
}

/*
 * @brief                    Gets the number of characters that need to be
 *                           deleted at the end of the string.
 * 
 * @param s1                 The original string.
 * @param set                The characters that have to be deleted.
 * @param len_s1             The total length of "s1"
 * @return int:              Number of characters that need to be deleted.
 */
static int	get_end_len(char const *s1, char const *set, t_size len_s1)
{
	t_size	len;
	t_size	index;

	index = 0;
	len = 0;
	while (s1[len_s1 - 1 - len])
	{
		while (set[index])
		{
			if (s1[len_s1 - 1 - len] == set[index])
				break ;
			else
				index++;
		}
		if (s1[len_s1 - 1 - len] != set[index])
			return (len);
		index = 0;
		len++;
	}
	return (len);
}

/*
 * @brief                    Creates a copy of "s1" where the end and start
 *                           character are deleted if they are in "set"
 * 
 * @param s1                 The original string.
 * @param set                The characters that have to be deleted.
 * @return char*:            The new string.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	t_size	len_s1;
	t_size	len_begining;
	t_size	len_end;
	char	*result;

	if (s1 == 0 || set == 0)
		return (0);
	len_s1 = ft_strlen(s1);
	len_begining = get_begining_len(s1, set);
	if (len_s1 == len_begining)
		return (ft_calloc(1, 1));
	len_end = get_end_len(s1, set, len_s1);
	result = ft_calloc(len_s1 - len_end - len_begining + 1, 1);
	if (!result)
		return (0);
	ft_strlcpy(result, s1 + len_begining, len_s1 - len_end - len_begining + 1);
	return (result);
}
