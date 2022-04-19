/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:44:31 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 12:15:15 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * @brief               Checks if "chr" is a digit.
 * 
 * @param chr           The character checked
 * @return int          (1) if "chr" is a digit,
 *                      (0) if it is not.
 */
int	ft_isdigit(int chr)
{
	if ('0' <= chr && chr <= '9')
		return (1);
	return (0);
}
