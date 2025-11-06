/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 09:38:46 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/05 10:03:19 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = s;
	i = 0;
	while (str[i] && i < n)
	{
		if (str[i] == c)
			return ((char *) &str[i]);
	}
	return (NULL);
}

/* int main(void)
{
	char s[] = "test";
	int c = "e";
	printf("Perso: %s\n", ft_memchr(s, c, 4));
	printf("Lib: %s\n", ft_memchr(s, c, 4));
} */