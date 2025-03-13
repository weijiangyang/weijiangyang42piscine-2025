#include <stdio.h>
#include <stdlib.h>

int     count_words(char *str)
{
        int     count;
        int     in_word;
        int     i;

        i = 0;
        count = 0;
        in_word = 0;
        while (str[i])
        {
                if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
                {
                        if (in_word == 0)
                        {
                                count++;
                                in_word = 1;
                        }
                }
                else
                        in_word = 0;
                i++;
        }
        return (count);
}

int     len_word(char *str)
{
        int     i;
        int     len;

        len = 0;
        i = 0;
        while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
                len++;
                i++;
        }
        return (len);
}

char *write_word(char *str)
{
        char *word;
        int     i;
        int     len;

        i = 0;
        len = len_word(str);
        word = (char *) malloc ((len + 1) * sizeof(char));
        while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
                word[i] = str[i];
                i++;
        }
        word[i] = '\0';
        return (word);
}

char    **ft_split(char *str)
{
        char **res;
        int     i;
        int     j;
        int     nb;

        nb = count_words(str);
        j = 0;
        i = 0;
        res = malloc ((nb + 1) * sizeof (char *));
        if (!res)
                return (NULL);
        while (i < nb)
        {
                while (*str == ' ' || *str == '\n' || *str == '\t')
                        str++;
                if (*str)
                {
                        res[i] = write_word(str);
                        if (!res[i])
                                return (NULL);
                        str += len_word(str);
                }
                i++;
        }
        return (res);
}

void reverse(char **str, int size)
{
	int	left;
	int	right;
	char	*tmp;

	right = size - 1;
	left = 0;
	while (left < right)
	{
		tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
}

int     main(void)
{
        char **result;
        char *str = "hello salut good morning";
        int     nb_words = count_words(str);
        int     i;
        int     len;

        len = len_word(str);
        i = 0;
        result = ft_split(str);
	reverse(result, nb_words);
        while (i < 4 )

        {

                printf ("%s\n", result[i] );
                i++;
        }
        printf ("%d\n", len);
        return (0);
}
	
