/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:11:30 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/09 15:17:56 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	needle_len;
	size_t	i;

	i = 0;
	needle_len = ft_strlen(little);
	if (needle_len == 0)
		return ((char *)big);
	if (big[0] == '\0')
		return (0);
	if (len < needle_len)
		return (NULL);
	while (i < len)
	{
		if (*big == '\0')
			return (NULL);
		if (*big == *little && ft_strncmp(big, little, needle_len) == 0
			&& (i + 1 < len || len == 1))
			return ((char *)big);
		big++;
		i++;
	}
	return (NULL);
}
