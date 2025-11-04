/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:23:52 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/04 12:03:37 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;

	str = s;
	while (n--)
		str[n] = c;
	return (s);
}
/* #include <stdio.h>
int main(void)
{ 
	int array[5] = {1, 2, 3, 4, 5};
	size_t size = sizeof(int) * 5;
	ft_memset(array, 'a', size);
	int i = 0;
	while (array[i++])
		printf("%d", array[i]);
} */
