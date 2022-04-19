/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:44:24 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 12:15:11 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * @brief                    Checks if "chr" is an ascii character.
 * 
 * @param chr                The character checked
 * @return int:              (1) if "chr" is an ascii character,
 *                           (0) if it is not
 */
int	ft_isascii(int chr)
{
	if (0 <= chr && chr <= 127)
		return (1);
	return (0);
}
