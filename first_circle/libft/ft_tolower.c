/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 15:36:51 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 15:05:08 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * @brief                    Turns a character into lowercase if
 *                           it is uppercase.
 * 
 * @param chr                The character.
 * @return int:              The lowercase character or
 *                           the character if it wasn't uppercase.
 */
int	ft_tolower(int chr)
{
	if ('A' <= chr && chr <= 'Z')
		chr += 32;
	return (chr);
}
