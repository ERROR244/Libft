/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:57:54 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/10 18:49:39 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	num_of_strings(const char *s, char c)
{
	int	i;
	int	nos;

	i = 0;
	nos = 0;
	while (s[i] == c)
		i++;
	if (s[i] == '\0')
		return (nos);
	while (s[i])
	{
		if (s[i - 1] != c && s[i] == c)
		{
			if (s[i + 1] == '\0')
				break ;
			nos++;
		}
		i++;
	}
	if (nos == 0)
		nos++;
	return (nos);
}

static int	string_str_len(const char *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	len++;
	return (len);
}

static char	**allocate_and_fill(const char *s, int nos, char **ptr, char c)
{
	int	j;
	int	i;
	int	k;
	int	l;

	j = 0;
	i = 0;
	k = 0;
	while (i < nos)
	{
		j = string_str_len(s, c);
		ptr[i] = (char *)malloc(j * sizeof(char));
		l = 0;
		while (*s == c)
			s++;
		while (k < j && *s != c && *s != '\0')
		{
			ptr[i][l++] = (char)*s++;
		}
		ptr[i++][l] = '\0';
	}
	ptr[i] = NULL;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr1;
	char	*ptr2;
	int		nos;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (c == 0)
	{
		ptr1 = (char **)malloc((2) * sizeof(char *));
		ptr2 = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
		while (s[i])
		{
			ptr2[i] = s[i];
			i++;
		}
		ptr2[i] = '\0';
		ptr1[0] = ptr2;
		ptr1[1] = '\0';
		return (ptr1);
	}
	nos = num_of_strings(s, c);
	ptr1 = (char **)malloc((nos + 1) * sizeof(char *));
	if (ptr1 == NULL)
		return (NULL);
	return (allocate_and_fill(s, nos, ptr1, c));
}

int main() {
    char test_string[] = "";
    char delimiter = ' ';

    char **result = ft_split(test_string, ' ');
    printf("%s\n", result[0]);

    return 0;
}