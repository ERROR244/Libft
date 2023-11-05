/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:37:30 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/04 19:38:29 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void printContent(void *content) {
    printf("%s\n", (char *)content); // Assumes content is a string
}*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}/*

int main() {
    // Create a simple linked list
    t_list *head = (t_list *)malloc(sizeof(t_list));
    head->content = "Node 1";
    head->next = (t_list *)malloc(sizeof(t_list));
    head->next->content = "Node 2";
	head->next->next = (t_list *)malloc(sizeof(t_list));
    head->next->next->content = "Node 3";
    head->next->next->next = NULL;

    // Display the list contents using ft_lstiter
    printf("List contents:\n");
    ft_lstiter(head, &printContent);

    return 0;
}*/