/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lellong- < lellong-@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:47:29 by lellong-          #+#    #+#             */
/*   Updated: 2022/11/15 15:00:43 by lellong-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*suiv;
	t_list	*current;

	current = *lst;
	if (!lst || !(*del))
		return ;
	while (current)
	{
		suiv = current->next;
		(*del)(current->content);
		free(current);
		current = suiv;
	}
	*lst = NULL;
}
