/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:54:54 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/02 12:54:56 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    int s1_len = ft_strlen(s1);
    int s2_len = ft_strlen(s2);
    char *ptr;

    ptr =(char *)malloc((s1_len + s2_len + 1) * sizeof(char));
    i = 0;
    j = 0;
    if (ptr == 0)
        return (0);
    while (s1[i])
    {
        ptr[i] = s1[i];
        i++;
    }
    while (s2[j])
        ptr[i++] = s2[j++];
    ptr[i] = '\0';
    return (ptr);
}/*

int main()
{
    char s1[] = "khalil ";
    char s2[] = "sohail!";

    printf("%s\n ", ft_strjoin(s1, s2));


}

*/