/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:23:52 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/06 10:27:59 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;

	str = s;
	while (n--)
		str[n] = c;
	return (s);
}

/* int main(void)
{ 
	char str[] = "test";
	int nb[5] = {1, 2, 3, 4, 5};
	size_t size = sizeof(char) * 4;
	size_t size_nb = sizeof(int) * 5;
	ft_memset(str, 'o', size);
	ft_memset(nb, 0, size_nb);
	printf("%s\n", str);
	int i = 0;
	while (nb[i++])
		printf("%d\n", nb[i]);
} */
