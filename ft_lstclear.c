/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksohail- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:03:51 by ksohail-          #+#    #+#             */
/*   Updated: 2023/11/05 15:30:04 by ksohail-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr1;
	t_list	*curr2;

	curr1 = *lst;
	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	while (curr1->next != NULL)
	{
		curr2 = curr1->next;
		ft_lstdelone(curr1, del);
		curr1 = curr2;
	}
  ft_lstdelone(curr1, del);
	*lst = NULL;
}
