/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:20:44 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/01 17:09:02 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i = 0;
    size_t j = 0;
    size_t dst_length;
    size_t src_length;

    dst_length = ft_strlen(dst);
    src_length = ft_strlen(src);
    while (dst[i])
        i++;
    while (src[j] && i < size - 1)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[dst_length + i] = '\0';
    
    return (src_length + dst_length);
}/*

int main() {
    
    char dst[20] = "Hello, ";
    char src[] = "world!";

    size_t len = ft_strlcat(dst, src, sizeof(dst));
    printf("Concatenated string(ft_strlcat): %s\n", dst);
    printf("Total length(ft_strlcat): %zu\n", len);
    
    /////////////////
    printf("\n\n");
    ////////////////
    
    char d[20] = "Hello, ";
    char s[] = "world!";

    size_t l = ft_strlcat(d, s, sizeof(d));

    printf("Concatenated string(strlcat): %s\n", d);
    printf("Total length(strlcat): %zu\n", l);

    return 0;
}

*/