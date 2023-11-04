/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:56:29 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/04 11:11:50 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*ptr;

	ptr = ft_itoa(n);
	ft_putstr_fd(ptr, fd);
}

int main()
{
    int i;

    scanf("%d", &i);
    ft_putnbr_fd(i, open("text.txt", O_WRONLY | O_CREAT, 0644));
}
