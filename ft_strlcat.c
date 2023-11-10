/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:20:44 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/10 16:29:02 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  res;
    size_t  dst_length;
    size_t  src_length;

    i = 0;
    if (dst == NULL)
        return (0);
    if (src == NULL)
        return (0);
    dst_length = ft_strlen(dst);
    src_length = ft_strlen(src);
    if (dst_length < size)
        res = dst_length + src_length;
    else
        res = size + src_length;
    if (size == 0)
        return (res);
    while (src[i] && dst_length + i < size - 1)
    {
        dst[dst_length + i] = src[i];
        i++;
    }
    dst[dst_length + i] = '\0';
    return (res);
}
