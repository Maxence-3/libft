/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:02:16 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/06 10:30:09 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		i;
	int		total;
	void	*ptr;

	i = 0;
	total = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(total);
	while (i++ < total)
		((char *)ptr)[i] = 0;
	return (ptr);
}

/* int main(void)
{
	char *str;
	str = ft_calloc(4, sizeof(char));
	printf("%s", str);
	free(str);
} */