/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:03:59 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/01 17:11:06 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    int i;

    i = 0;
    while (src[i] && size - 1 > 0)
    {
        dst[i] = src[i];
        size--;
        i++;
    }
    if (size == 1)
        dst[i] = '\0';
    return (ft_strlen(src));
}/*

int main() {
    int k = 30;
    int m = 20;
    char src[] = "This is a source string.";
    char dst[m];  // Destination buffer

    size_t len = ft_strlcpy(dst, src, k);

    printf("Copied string(ft_strlcpy) :%s\n", dst);
    printf("Length of source string(ft_strlcpy) :%zu\n", len);
    
    
   printf("\n\n");
   
   
    char s[] = "This is a source string.";
    char d[m];  // Destination buffer

    size_t l = ft_strlcpy(d, s, k);

    printf("Copied string(strlcpy) :%s\n", d);
    printf("Length of source string(strlcpy) :%zu\n", l);

    return 0;
}

*/