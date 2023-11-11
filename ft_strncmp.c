/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:42:46 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/06 19:26:03 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0 || (s1 == NULL && s2 == NULL))
		return (0);
	while (n > 0)
	{
		if (*s1 != *s2)
			return (unsigned char)(*s1) - (unsigned char)(*s2);
		if (*s1 == '\0' || *s2 == '\0')
			break ;
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (unsigned char)(*s1) - (unsigned char)(*s2);
}

