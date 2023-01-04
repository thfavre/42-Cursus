/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrasset <fgrasset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:54:59 by fgrasset          #+#    #+#             */
/*   Updated: 2023/01/04 13:08:38 by fgrasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* swaps first 2 elements top of list A */
void	sa(t_list *head_a)
{
	t_list	*ele1;
	t_list	*ele2;

	ele1 = head_a;
	ele2 = head_a->next;
	if (!ele1 || !ele2)
		return ;
	ele2->previous = ele1->previous;
	ele1->next = ele2->next;
	ele2->next = ele1;
	ele1->previous = ele2;
	head_a = ele2;
}

/* swaps first 2 elements top of list B */
void	sb(t_list *head_b)
{
	t_list	*ele1;
	t_list	*ele2;

	ele1 = head_b;
	ele2 = head_b->next;
	if (!ele1 || !ele2)
		return ;
	ele2->previous = ele1->previous;
	ele1->next = ele2->next;
	ele2->next = ele1;
	ele1->previous = ele2;
	head_b = ele2;
}

/* executes sa and sb */
void	ss(t_list *head_a, t_list *head_b)
{
	sa(head_a);
	sb(head_b);
}

/* puts first element of list B and puts it
   on top of list A, returns if list
   A is NULL */
void	pa(t_list *head_a, t_list *head_b)
{
	t_list	*ele_a;
	t_list	*ele_b;

	if (!head_a || !head_b)
		return ;
	ele_a = head_a;
	ele_b = head_b;
	head_b = ele_b->next;
	ele_b->next->previous = ele_b->previous;
	ele_b->next = ele_a;
	ele_b->previous = ele_a->previous;
	ele_a->previous = ele_b;
	head_a = ele_b;
}

/* puts first element of list A and puts it
   on top of list B, returns if list
   B is NULL */
void	pb(t_list *head_b, t_list *head_a)
{
	t_list	*ele_a;
	t_list	*ele_b;

	if (!head_a || !head_b)
		return ;
	ele_a = head_a;
	ele_b = head_b;
	head_a = ele_a->next;
	ele_a->next->previous = ele_a->previous;
	ele_a->next = ele_b;
	ele_a->previous = ele_b->previous;
	ele_b->previous = ele_a;
	head_b = ele_a;
}