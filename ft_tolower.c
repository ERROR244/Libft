/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:03:37 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/01 19:05:13 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 65 && c<= 90)
        c += 32;
    return (c);
}

int main() {
    char uppercase = 'z';
    char lowercase = ft_tolower(uppercase);

    printf("Uppercase character: %c\n", uppercase);
    printf("Lowercase character: %c\n", lowercase);

    return 0;
}
