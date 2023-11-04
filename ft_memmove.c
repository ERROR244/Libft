/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:29:48 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/01 17:20:57 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *ptr1;
    const unsigned char *ptr2;

    ptr1 = (unsigned char *)dest;
    ptr2 = (const unsigned char *)src;
    if (ptr1 == ptr2)
        return (dest);
    else if (ptr1 < ptr2)
    {
        while (n > 0)
        {
            *ptr1 = *ptr2;
            ptr1++;
            ptr2++;
            n--;
        }
    }
    else
    {
        ptr1 += n - 1;
        ptr2 += n - 1;
        while (n > 0)
        {
            *ptr1 = *ptr2;
            ptr1--;
            ptr2--;
            n--;
        }
    }
    return (dest);
}/*

int main() {
    char str[] = "Hello, this is a test string.";
    char buffer[10];

    ft_memmove(buffer, str + 7, 20);

    printf("%s\n", str);
    printf("%s\n", buffer);
    
    char str1[] = "Hello, this is a test string.";
    char buffer1[50];

    memmove(buffer1, str1 + 7, 20);

    printf("%s\n", str1);
    printf("%s\n", buffer1);

    return 0;
}

*/