/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:44:24 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 12:14:41 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * @brief               Checks if "chr" is a printable chr.
 * 
 * @param chr           The character checked
 * @return int          (1) if "i" is a printable chr,
 *                      (0) if it is not.
 */
int	ft_isprint(int chr)
{
	if (32 <= chr && chr <= 126)
		return (1);
	return (0);
}
