/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:29:10 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/06 11:19:48 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	f1(int l, char const *s1, char const *set)
{
	int	j;
	int	i ;

	i = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (s1[i] != set[j])
			break ;
		l++;
		i--;
	}
	return (l);
}

int	f2(int k, char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (s1[i] != set[j])
			break ;
		k++;
		i++;
	}
	return (k);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		a;
	int		k;
	int		l;

	k = f2(0, s1, set);
	l = f1(0, s1, set);
	a = ft_strlen(s1) - (k + l);
	l = 0;
	ptr = (char *)malloc((a + 1) * sizeof(char));
	while (l < a)
		ptr[l++] = s1[k++];
	ptr[l] = '\0';
	return (ptr);
}

int	main(void)
{
	printf("%s \n", ft_strtrim("#khalil # sohail#", "lks#"));
}
