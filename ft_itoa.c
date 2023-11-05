/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:40:31 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/05 17:00:19 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*fill(char *ptr, int n, int x)
{
	int	i;

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

void	nor_line(int *n, int *x)
{
	if (*n < 0)
	{
		*x += 1;
		*n *= -1;
	}
}

char	*ft_itoa(int n)
{
	int	i;
	int	x;
	char	*ptr;

	x = 0;
	i = n;
	nor_line(&n, &x);
	n /= 10;
	x++;
	while (n != 0)
	{
		n /= 10;
		x++;
	}
	ptr = (char *)malloc((x + 1) * sizeof(char));
	ptr[x] = '\0';
	if (i == -2147483648)
	{
		ptr[--x] = '8';
		i = -214748364;
	}
	x--;
	return (fill(ptr, i, x));
}
