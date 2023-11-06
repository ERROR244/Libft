/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:57:54 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/06 11:14:58 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	num_of_strings(const char *s, char c)
{
	int	i;
	int	nos;

	i = 0;
	nos = 0;
	if (s[0] == c)
		i++;
	nos++;
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
	return (nos);
}

int	string_str_len(const char *s, char c)
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

char	**allocate_and_fill(const char *s, int nos, char **ptr, char c)
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
			ptr[i][l++] = (char)*s++;
		ptr[i++][l] = '\0';
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		nos;

	nos = num_of_strings(s, c);
	ptr = (char **)malloc((nos + 1) * sizeof(char *));
	return (allocate_and_fill(s, nos, ptr, c));
}
