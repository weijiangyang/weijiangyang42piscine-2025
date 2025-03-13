/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:02:44 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/11 16:28:17 by weiyang          ###   ########.fr       */
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

int	count_words(char *str, char *sep)
{
	int	i;
	int	compte;
	int	in_word;

	i = 0;
	compte = 0;
	in_word = 0;
	if (*sep == '\0')
		return (1);
	while (str[i])
	{
		if (!is_separator(str[i], sep) && in_word == 0)
		{
			compte++;
			in_word = 1;
		}
		if (is_separator(str[i], sep))
			in_word = 0;
		i++;
	}
	return (compte);
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
	char	*word;
	int		len;
	int		i;

	i = 0;
	len = len_word(from, sep);
	word = (char *) malloc ((len + 1) * sizeof (char));
	if (!word)
		return (NULL);
	while (from[i] && !is_separator (from[i], sep))
	{
		word[i] = from[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		nb_words;
	char	**res;
	int		i;

	i = 0;
	nb_words = count_words(str, charset);
	res = (char **) malloc ((nb_words + 1) * sizeof (char *));
	if (!res)
		return (NULL);
	while (i < nb_words)
	{
		while (is_separator (*str, charset))
			str++;
		if (*str)
		{
			res[i] = write_word(str, charset);
			if (!res[i])
				return (NULL);
			str += len_word(str, charset);
		}
		i++;
	}
	res[i] = NULL;
	return (res);
}

/*char    **ft_split(char *str, char *charset)
{
        int             i;
        char    **res;
        int             k;

        i = 0;
        k = 0;
        res = (char **) malloc ((count_words(str, charset) + 1)
                        * sizeof(char *));
        if (!res)
                return (NULL);
        while (i < count_words(str, charset))
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
}*/
/*#include <stdio.h>

int	main(int argc, char **argv)
{
	char **result;
	int	i;

	i = 0;
	result = ft_split(argv[1], argv[2]);
	while (result[i])
	{
		printf ("%s\n", result[i]);
		i++;
	}
	return (0);
}*/
