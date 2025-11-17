/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:53:56 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/15 12:26:42 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (!dest && !src)
		return (NULL);
	while (n--)
		d[n] = s[n];
	return (dest);
}

/* #include <stdio.h>
int main(void)
{
	char str[] = "macron traitrise";
	char str2[] = "macron demission";
	int test3 = 4;
	int test4 = 18;
	printf("avant lib memcpy str : %s\n", str);
	printf("avant lib memcpy int : %d\n", test3);
	printf("avant ft memcpy str : %s\n", str);
	printf("avant ft memcpy int : %d\n", test3);

	memcpy(str + 7, str2 + 7, 9);
	ft_memcpy(str + 7, str2 + 7, 9);

	memcpy(&test3, &test4, 4);
	ft_memcpy(&test3, &test4, 4);

	printf("apres lib memcpy str : %s\n", str);
	printf("apres lib memcpy int : %d\n", test3);
	printf("apres ft memcpy str : %s\n", str);
	printf("apres ft memcpy int : %d\n", test3);

	return (0);
} */