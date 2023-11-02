/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:10:50 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/01 19:11:13 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 97 && c<= 122)
        c -= 32;
    return (c);
}

int main() {
    char lowercase = 'Z';
    char uppercase = ft_toupper(lowercase);

    printf("Lowercase character: %c\n", lowercase);
    printf("Uppercase character: %c\n", uppercase);

    return 0;
}
