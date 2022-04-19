/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 15:36:51 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 15:05:05 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * @brief                    Turns a character into uppercase if
 *                           it is lowercase.
 * 
 * @param chr                The character.
 * @return int:              The uppercase character or
 *                           the character if it wasn't lowercase.
 */
int	ft_toupper(int i)
{
	if ('a' <= i && i <= 'z')
		i -= 32;
	return (i);
}
