/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:58:10 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/01 16:21:03 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *ptr1;
    const unsigned char *ptr2;
    
    i = 0;
    ptr1 = (unsigned char *)dest;
    ptr2 = (const unsigned char *)src;
    while (i < n)
    {
        ptr1[i] = ptr2[i];
        i++;
    }
    return (dest);
}/*

int main() {
    const char src[] = "This is the source string.";
    char dest[50];



    ft_memcpy(dest, src+1, strlen(src));

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}

*/