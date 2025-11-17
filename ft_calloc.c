/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:02:16 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/15 11:54:14 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	size_t	total;
	void	*ptr;

	i = 0;
	if (nmemb != 0 && size > __SIZE_MAX__ / nmemb)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	while (i < total)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

/* int main(void)
{
	char *str;
	str = ft_calloc(4, sizeof(char));
	printf("%s", str);
	free(str);
} */