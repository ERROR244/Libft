/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:45:57 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/10 18:31:47 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (ft_strdup(""));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	ptr = (void *)malloc(nmemb * size);
	if (ptr != NULL)
	{
		i = 0;
		while (i < nmemb * size)
		{
			*((char *)ptr + i) = 0;
			i++;
		}
	}
	return (ptr);
}
