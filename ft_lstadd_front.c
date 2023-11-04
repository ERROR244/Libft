/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:00:23 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/04 15:02:06 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (new)
    {
        new->next = *lst;
        *lst = new;
    }
}/*
int main() {
    t_list *list = NULL;

    t_list *new_node1 = ft_lstnew("Node 1");
    t_list *new_node2 = ft_lstnew("Node 2");
    t_list *new_node3 = ft_lstnew("Node 3");

    ft_lstadd_front(&list, new_node1);
    ft_lstadd_front(&list, new_node2);
    ft_lstadd_front(&list, new_node3);

    t_list *curr = list;
    while (curr != NULL)
    {
        printf("%s\n", (char *)current->content);
        curr = current->next;
    }

    return 0;
}
*/