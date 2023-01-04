/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrasset <fgrasset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:50:01 by fgrasset          #+#    #+#             */
/*   Updated: 2023/01/04 11:31:47 by fgrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* normalize the list between 0 and 1
   if flag == 1 unormalize it otherwise */
void	normalize(t_list *head, int flag)
{
	static int	max;
	static int	min;
	t_list		*current;

	if (!head)
		return ;
	current = head;
	if (!max && !min)
	{
		max = max_min(head, 1, list_size(head));
		min = max_min(head, 0, list_size(head));
		if (min == max)
			return ;
	}
	while (current)
	{
		if (flag == 0)
			*(float *)current->data = (*(float *)current->data - min) \
			/ (max - min);
		else
			*(float *)current->data = (*(float *)current->data * \
			(max - min)) + min;
		current = current->next;
	}
}

/* returns max of list if flag == 1,
   returns min if flag == 0 up ot len */
int	max_min(t_list *head, int flag, int len)
{
	int		count;
	float	tmp;
	t_list	*current;

	count = 0;
	tmp = 0;
	while (current && count <= len)
	{
		if (flag == 0)
		{
			tmp = 1;
			if (*(float *)current->data < tmp)
				tmp = *(float *)current->data;
		}
		else
		{
			if (*(float *)current->data > tmp)
				tmp = *(float *)current->data;
		}
		count++;
		current = current->next;
	}
	return (tmp);
}