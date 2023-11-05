/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:06:10 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/04 16:07:02 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *curr = ft_lstlast(*lst);
    curr->next = new;
}/*
int main() {
    t_list *first = ft_lstnew("First");
    t_list *second = ft_lstnew("Second");
    t_list *new = ft_lstnew("New Node");

    ft_lstadd_back(&first, second); // Adding second node to the list
    ft_lstadd_back(&first, new);    // Adding new node to the list

    t_list *curr = first;
    while (curr != NULL) {
        printf("%s\n", (char *)curr->content);
        curr = curr->next;
    }

    return 0;
}
*/