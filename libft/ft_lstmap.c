/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafiane <ehafiane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:17:26 by ehafiane          #+#    #+#             */
/*   Updated: 2023/11/16 11:41:24 by ehafiane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tmp;

	head = NULL;
	while (lst)
	{
		tmp = ft_lstnew(lst);
		if (!tmp)
		{
			del(tmp);
			ft_lstclear(&head, del);
			return (NULL);
		}
		tmp->content = f(lst->content);
		ft_lstadd_back(&head, tmp);
		lst = lst->next;
	}
	return (head);
}
