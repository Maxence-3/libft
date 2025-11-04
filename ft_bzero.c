/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:32:27 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/04 12:03:57 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = s;
	while (n--)
		str[n] = '\0';
}

/* #include <stdio.h>
int main(void)
{
	int array[5] = {1, 2, 3, 4, 5};
	size_t size = sizeof(int) * 5;
	ft_bzero(array, size);
	int i = 0;
	while (array[i++])
		printf("%d", array[i]);
} */