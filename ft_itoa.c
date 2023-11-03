/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:40:31 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/03 09:41:04 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *fill(char *ptr, int n, int x)
{
    int i;
    
    i = n;
    if (n < 0)
      n *= -1;
    if (x >= 0)
    {
        ptr[x] = (n % 10) + '0';
        n /= 10;
        fill(ptr, n, --x);
    }
    if (i < 0)
        ptr[0] = '-';
    return (ptr);
}

char *ft_itoa(int n)
{
    int i;
    int x;
    char *ptr;

    x = 0;
    i = n;
    if (n < 0)
    {
        x++;
        n *= -1;
    }
    do{
        n /= 10;
        x++;
    }while(n != 0);
    ptr = (char *)malloc((x + 1) * sizeof(char));
    ptr[x] = '\0';
    if (i == -2147483648)
    {
        ptr[-x] = '8';
        i = -214748364;
    }
    x--;
    return (fill(ptr, i, x));
}

int main()
{
    int i = 2147483647;
    int j = -2147483648;
    int k = -125;
    int l = 125;
    int m = 0;
    printf("%s\n", ft_itoa(i));
    printf("%s\n", ft_itoa(j));
    printf("%s\n", ft_itoa(k));
    printf("%s\n", ft_itoa(l));
    printf("%s\n", ft_itoa(m));
}