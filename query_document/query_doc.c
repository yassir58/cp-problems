#include "header.h"


int	count_words(char *str, char c)
{
	int	word_count;
	int	state;
	int	i;

	state = 0;
	word_count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			state = 0;
		else if (state == 0)
		{
			state = 1;
			word_count++;
		}
		i++;
	}
	return (word_count);
}



char	*fill_tab(char  *s, int *start, int finish, char **tab)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc((finish - *start + 1) * sizeof(char));
	if (!str)
		free_tab(tab);
	while ((*start) < finish)
		str[i++] = s[(*start)++];
	str[i] = '\0';
	*start = -1;
	return (str);
}

char	**ft_split(char  *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**tab;

	if (!s)
		return (NULL);
	tab = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (i <= strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == strlen(s)) && index >= 0)
			tab[j++] = fill_tab(s, &index, i, tab);
		i++;
	}
	tab[j] = 0;
	return (tab);
}

char ****get_document (char *str)
{
    int para_count;
    int sent_count;
    int i , j;
    char **temp;
    char **temp_2;
    char ****document;

    i = 0, j = 0;
    para_count = count_words(str, '\n');
    document = malloc (sizeof (char***) * (para_count + 1));
    temp = ft_split (str, '\n');
    while (temp[i])
    {
        temp_2 = ft_split (temp[i], '.');
        sent_count = count_words(temp[i], '.');
        document[i] = malloc (sizeof (char **) * (sent_count + 1));
        while (j < sent_count)
        {
            document[i][j] = ft_split (temp_2[j],' ');
            j++;
        }
        document[i][j] = NULL;
        j = 0;
        free_tab (temp_2);
        i++;
    }
    document[i] = NULL;
    free_tab (temp);
    return (document);
}
