/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:57:54 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/10 18:49:39 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_words(char const *s, char c)
{
    int count;
    int in_word;

    count = 0;
    in_word = 0;
    while (s && *s)
    {
        if (*s == c) 
            in_word = 0;
        else
        {
            if (in_word == 0 && *s != c)
            {
                count++;
                in_word = 1;
            }
        }
        s++;
    }
    return (count);
}

static char *ft_strndup(const char *s, size_t n)
{
    char    *dup;
    size_t  i;
    if (!s)
        return (NULL);

    dup = (char *)malloc((n + 1) * sizeof(char));
    if (dup != NULL)
    {
         i = 0;
        while (i < n)
        {
            dup[i] = s[i];
            i++;
        }
        dup[n] = '\0';
    }
    return (dup);
}

char **ft_split(char const *s, char c)
{
    int word_count;
    char **ptr;
    const char *start;
    int i;
    int j;
    if (s == NULL)
        return NULL;

    word_count = count_words(s, c);
    ptr = malloc((word_count + 1) * sizeof(char *));
    if (ptr == NULL)
        return NULL;

     i = 0;
    while (*s)
    {
        if (*s != c)
        {
            start = s;
            while (*s && *s != c)
                s++;
            ptr[i] = ft_strndup(start, s - start);
            if (ptr[i] == NULL)
            {
                j = 0;
                while (j < i)
                    free(ptr[j++]);
                free(ptr);
                return NULL;
            }
            i++;
        } 
        else
            s++;
    }
    ptr[i] = NULL;
    return (ptr);
}
