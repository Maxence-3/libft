/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 20:26:24 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/15 11:22:33 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*result;
	t_list	*n;

	result = malloc(sizeof(t_list));
	if (!result)
		return (NULL);
	n = result;
	n->content = content;
	n->next = NULL;
	return (result);
}

/* int main(void)
{
	char *test = "test";
	t_list *result = ft_lstnew(test);
	display_free(result);
} */