/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:29:17 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/04 15:29:49 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list *curr;
    int i;

    i = 0;
    curr = lst;
    while (curr != NULL)
    {
        curr = curr->next;
        i++;
    }
    return (i);
}/*
int main() {
    t_list *head = NULL;

    t_list *node1 = ft_lstnew("Node 1 content");
    t_list *node2 = ft_lstnew("Node 2 content");
    t_list *node3 = ft_lstnew("Node 3 content");
    t_list *node4 = ft_lstnew("Node 4 content");
    t_list *node5 = ft_lstnew("Node 5 content");

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    head = node1;

    int size = ft_lstsize(head);

    printf("Size of the list: %d\n", size);

    while (head) {
        t_list *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
*/