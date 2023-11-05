/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:10:22 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/04 17:28:25 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (lst)
    {
        if (lst && lst->content)
        {
            del(lst->content);
        }
    free(lst);
    }
}
/*
int main() {
    t_list *node = ft_lstnew("Hello, World!"); // Example list node creation
    ft_lstdelone(node, del); // Delete the node and its content

    return 0;
}
*/