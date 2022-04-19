/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:44:29 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/24 12:15:01 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * @brief                    Checks if "chr" is alpha.
 * 
 * @param chr                The character checked
 * @return int:              (1) if "chr" is a alpha,
 *                           (0) if it is not
 */
int	ft_isalpha(int chr)
{
	if (('a' <= chr && chr <= 'z') || ('A' <= chr && chr <= 'Z'))
		return (1);
	return (0);
}
