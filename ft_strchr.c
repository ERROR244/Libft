/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:35:05 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/06 18:53:19 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	k;

	k = (unsigned char)c;
	while (*s)
	{
		if (*s == k)
			return ((char *)s);
		s++;
	}
	if (k == '\0')
		return ((char *)s);
	return (NULL);
}
