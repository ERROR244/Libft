/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:34:58 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/01 16:19:27 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
    size_t i;
	unsigned char	*ptr;

    i = 0;
    ptr = (unsigned char *)s;
	while (i < n)
	{
		*(ptr + i) = 0;
		i++;
	}
}/*
int main() {
    char array[30] = "khalil sohail is me";

    // Initializing array
    ft_bzero(&array[3], sizeof(array));

    printf("Array after using bzero:\n");
    for (int i = 0; i < sizeof(array); i++) {
        printf("%d ", array[i]);
    }

    return 0;
}*/