/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:28:42 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/03 15:29:23 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void f(unsigned int i, char* c)
{
    if (i == 0 || i != 0)
    {
        if (*c >= 'a' && *c <= 'z')
            *c = 'A';
        else if (*c >= 'A' && *c <= 'Z')
            *c = 'a';
    }
}

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i;

    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

int main() {
    char inputString[] = "ExAmPl#EsTrInG";

    printf("Original String: %s\n", inputString);

    ft_striteri(inputString, &f);


    printf("Modified String: %s\n", inputString);
    return 0;
}