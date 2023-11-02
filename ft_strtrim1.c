/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:29:10 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/02 13:29:36 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int a;
	int i = 0;
    int j;
    int k = 0;
    int l = 0;
    char *ptr;

    while (s1[i])
    {
        j = 0;
        while (set[j])
        {
            if (s1[i] == set[j])
                break;
            j++;
        }
        if (s1[i] != set[j])
            break;
        i++;
        k++;
    }
    i = ft_strlen(s1) - 1;
    while (i >= 0)
    {
        j = 0;
        while (set[j])
        {
            if (s1[i] == set[j])
                break;
            j++;
        }
        if (s1[i] != set[j])
            break;
        i--;
        l++;
    }
    a = ft_strlen(s1) - (k + l);
    i = 0;
    ptr = (char *)malloc((a + 1) * sizeof(char));
    while (i < a)
        ptr[i++] = s1[k++];
    ptr[i] = '\0';
    return (ptr);
}

int main()
{
    printf("%s \n", ft_strtrim("###khalil # sohail#", "khl#"));
}