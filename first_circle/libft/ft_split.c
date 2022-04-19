/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <sdi-lega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:45:50 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/09/28 09:53:40 by sdi-lega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
 * @brief                    
 * 
 * @param result             texte
 * @return int:              texte
 */
static int	free_all(char **result, t_size index)
{
	while (index != 0)
	{
		free (result[index]);
	}
	free (result);
	return (0);
}

/*
 * @brief                    Get the number of words separated by "chr" in the
 *                           "str" string.
 * 
 * @param str                A string.
 * @param chr                The character that separate every word.
 * @return int:              the number of words in "str".
 */
static int	get_count_words(char const *str, char chr)
{
	t_size	index;
	int		count;

	count = 0;
	index = 0;
	while (str[index])
	{
		while (str[index] == chr)
			index++;
		if (str[index] != '\0')
			count++;
		while (str[index] != chr && str[index] != '\0')
			index++;
	}
	return (count);
}

/*
 * @brief                    Separate every words between "chr"s and create
 *                           an array of those words.
 * 
 * @param string             The original string
 * @param result             A pointer to the first ellement of the result
 *                           array(the first word).
 * @param words              Number of words in the original string.
 * @param chr                The separating character.
 * @return int:              (1) if everything went well,
 *                           (0) if it didn't
 */
static int	sep_string(const char *str, char **result, t_size words, char chr)
{
	t_size	letter_count;
	t_size	index;

	index = 0;
	while (index != words)
	{
		letter_count = 0;
		while (*str == chr)
			str++;
		while (str[letter_count] != chr && str[letter_count] != '\0')
			letter_count++;
		result[index] = ft_calloc(letter_count + 1, 1);
		if (!result[index])
			return (free_all(result, index - 1));
		ft_strlcpy(result[index++], str, letter_count + 1);
		str += letter_count;
	}
	return (1);
}

/*
 * @brief                    Splits a string into an array of words.
 *                           a word is a string between '\\0' or "chr". 
 * 
 * @param str                The original string.
 * @param c                  The separating character.
 * @return char**:           A pointer to the first element of the array.
*/
char	**ft_split(char const *str, char c)
{
	char	**result;
	t_size	word_count;

	if (!str)
		return (0);
	word_count = get_count_words(str, c);
	result = ft_calloc(word_count + 1, sizeof(char *));
	if (!result)
		return (0);
	if (sep_string(str, result, word_count, c) == 0)
		return (0);
	result[word_count] = 0;
	return (result);
}
