/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:34:58 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/06 11:21:29 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

  if (s == NULL)
    return;
	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		*(ptr + i) = 0;
		i++;
	}
}
