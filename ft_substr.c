/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:30:12 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/02 12:30:14 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *ptr;

    ptr = (char *)malloc((len + 1) * sizeof(char));
    i = 0;
    if (ptr == NULL)
        return (0);
    while (i < len)
    {
        ptr[i] = s[start];
        i++;
        start++;
    }
    return (ptr);
}

int main()
{
    char *ptr = "khalil sohail!";

    printf("%s \n", ft_substr(ptr, 7, 7));
}