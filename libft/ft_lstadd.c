/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaitre <amaitre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 11:28:09 by amaitre           #+#    #+#             */
/*   Updated: 2016/04/18 17:53:26 by amaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *l_new)
{
	t_list	*l_start;

	if (alst)
	{
		l_start = *alst;
		*alst = l_new;
		l_new->next = l_start;
	}
	else
		*alst = l_new;
}
