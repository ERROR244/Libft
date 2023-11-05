/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:51:06 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/04 15:51:32 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    int i;

    i = ft_lstsize(lst) - 1;
    while (i != 0)
    {
        lst = lst->next;
        i--;
    }
    return (lst);
}/*

int main() {
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *node3 = ft_lstnew("Node 3");
    t_list *node4 = ft_lstnew("node 4");

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;

    t_list *last = ft_lstlast(node1);
    if (last)
        printf("The content of the last node is: %s\n", (char *)last->content);
    else
        printf("The list is empty.\n");

    return 0;
}
*/