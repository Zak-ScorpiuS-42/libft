/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabou-me <zabou-me@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 21:43:11 by zabou-me          #+#    #+#             */
/*   Updated: 2024/01/24 23:06:49 by zabou-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
void	delete_content(void *x)
{
	*((int *)x) = 0;	
}
*/

int	main(void)
{
	t_list	*list, *list1, *list2, *list3;
	int		a, b, c, d;

	a = 5;
	b = 10;
	list = ft_lstnew(&a);
	list1 = ft_lstnew(&b);

	list->next = list1;
	/*
	while (list)
	{
		printf("%d\n", *(int *)list->content);
		list = list->next;
	}
	*/
	c = a + b;
	list2 = ft_lstnew(&c);
	ft_lstadd_front(&list, list2);
	
	/*while (list)
	{
		printf("%d\n", *(int *)list->content);
		list = list->next;
	}*/
	//printf("Sais: %d\n", ft_lstsize(list));
	//ft_lstlast(list);
	d = c * 2;
	list3 = ft_lstnew(&d);
	ft_lstadd_back(&list, list3);
	t_list *tmp = list;
	t_list *tmp2 = list;
	while (tmp)
	{
		printf("content: %d\n", *(int *)tmp->content);
		printf("%d\n", ft_lstsize(tmp));
		tmp = tmp->next;
	}
	//printf("size: %d\n", ft_lstsize(tmp2));
	//ft_lstdelone(list3, &delete_content);
	//printf("Valor de D despues de delete %d\n", d);
	//printf("size after delete:%d\n", ft_lstsize(list));
	ft_lstclear(&list3, &delete_content);
	printf("Valor de D despues de delete %d\n", d);
	printf("size after clear:%d\n", ft_lstsize(tmp2));
	return (0);
}
