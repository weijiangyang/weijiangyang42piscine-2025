/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:45:40 by weiyang           #+#    #+#             */
/*   Updated: 2025/03/09 11:42:28 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strconc(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str1[i])
		i++;
	while (str2[j])
	{
		str1[i + j] = str2[j];
		j++;
	}
	str1[i + j] = '\0';
	return (str1);
}

char	*ft_strjoin1(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (size == 0)
		res = ((char *) malloc (1));
	else
	{
		while (i < size)
		{
			len += str_len(strs[i]);
			i++;
		}
		len += str_len(sep) * (size - 1);
		res = (char *) malloc ((len + 1) * sizeof(char));
	}
	if (!res)
		return (NULL);
	res[0] = '\0';
	res[len] = '\0';
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*res;

	res = ft_strjoin1(size, strs, sep);
	i = 0;
	while (i < size)
	{
		ft_strconc(res, strs[i]);
		if (i < size - 1)
			ft_strconc(res, sep);
		i++;
	}
	return (res);
}	

/*int	main(void)
{
	char *result;
	char *sep;
	
	sep = "";
	char *strs[] = {"hello", "salut", "world"};
	result = ft_strjoin(3, strs, sep); 
	if (result)
		printf ("The result is %s\n", result);
	free (result);
	return (0);
}*/	
