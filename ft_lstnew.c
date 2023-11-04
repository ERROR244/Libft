/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:17:22 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/04 14:17:27 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *n_node;

    n_node = (t_list *)malloc(sizeof(struct s_list));
    if (n_node == NULL)
        return (NULL);
    n_node->content = content;
    n_node->next = NULL;
    return (n_node);
}/*

int main()
{
	t_list *new_node = ft_lstnew("Hello, World!");
	
    printf("Content: %s\n", (char *)new_node->content);

	free(new_node);
	return 0;
}
*/