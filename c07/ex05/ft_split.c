/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:38:52 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/06 17:03:22 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}	
	return (0);
}

int	count_nb_words(char *str, char *sep)
{
	int	i;
	int	in_word;
	int	nb_words;

	if (*sep == '\0')
		return (1);
	i = 0;
	in_word = 0;
	nb_words = 0;
	while (str[i])
	{
		if (!is_separator(str[i], sep))
		{
			if (!in_word)
			{	
				nb_words++;
				in_word = 1;
			}
		}
		else
			in_word = 0;
		i++;
	}
	return (nb_words);
}

int	len_word(char *str, char *sep)
{
	int	i;

	i = 0;
	while (str[i] && !is_separator(str[i], sep))
		i++;
	return (i);
}

char	*write_word(char *from, char *sep)
{
	int		i;
	int		len;
	char	*dest;

	i = 0;
	len = len_word(from, sep);
	dest = (char *) malloc ((len + 1) * sizeof (char));
	if (!dest)
		return (NULL);
	while (from[i] && !is_separator(from[i], sep))
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}	

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**res;
	int		k;

	i = 0;
	k = 0;
	res = (char **) malloc ((count_nb_words(str, charset) + 1)
			* sizeof(char *));
	if (!res)
		return (NULL);
	while (i < count_nb_words(str, charset))
	{
		while (is_separator(str[k], charset))
			k++;
		if (str[k])
		{
			res[i] = write_word(&str[k], charset);
			if (!res[i])
				return (NULL);
			k += len_word(&str[k], charset);
		}
		i++;
	}
	res[i] = NULL;
	return (res);
}
