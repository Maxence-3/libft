/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:23:21 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/04 17:28:08 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	char *temp[];

	d = dest;
	s = src;
	while (n--)
		temp[n] = s[n];
	while (temp[n])
		d[n] = temp[n];
	return (dest);
}
/* #include <stdio.h>
int main(void)
{
	char str[] = "macron traitrise";
	char str2[] = "macron demission";
	int test3 = 4;
	int test4 = 18;
	printf("avant lib memmove str : %s\n", str);
	printf("avant lib memmove int : %d\n", test3);
	printf("avant ft memmove str : %s\n", str);
	printf("avant ft memmove int : %d\n", test3);

	memmove(str + 7, str2 + 7, 9);
	ft_memmove(str + 7, str2 + 7, 9);

	memmove(&test3, &test4, 4);
	ft_memmove(&test3, &test4, 4);

	printf("apres lib memmove str : %s\n", str);
	printf("apres lib memmove int : %d\n", test3);
	printf("apres ft memmove str : %s\n", str);
	printf("apres ft memmove int : %d\n", test3);

	return (0);
} */