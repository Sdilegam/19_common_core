/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:44:24 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 12:14:06 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * @brief                    Checks if "chr" is alphanumeric.
 * 
 * @param chr                The character checked
 * @return int:              (1) if "chr" is a alphanumeric,
 *                           (0) if it is not
 */
int	ft_isalnum(int chr)
{
	if (ft_isalpha(chr) || ft_isdigit(chr))
		return (1);
	return (0);
}
