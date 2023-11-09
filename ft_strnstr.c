/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:11:30 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/05 17:56:39 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		needle_len;
	// const char	*end;
size_t i = 0;
  // if ()
    // len = ft_strlen(big);
	needle_len = ft_strlen(little);
	if (needle_len == 0)
    return ((char *)big);
  if  (big[0] == '\0')
		return (0);
	if (len < needle_len)
		return (NULL);
	// end = big + len - needle_len + 1;
	while (i < len)
	{
    if (*big == '\0' || *little == '\0')
      return (NULL);
		if (*big == *little && ft_strncmp(big, little, needle_len) == 0)
			return ((char *)big);
		big++;
    i = 0;
	}
	return (NULL);
}
