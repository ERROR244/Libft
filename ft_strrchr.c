/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:01:41 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/10 16:26:42 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	k;
	int				i;

	if (s == NULL)
		return (NULL);
	k = (unsigned char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == k)
			return ((char *)&s[i]);
		i--;
	}
	if (k == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
