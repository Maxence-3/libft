/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:23:21 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/06 11:46:14 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	char		temp[1024];

	d = dest;
	s = src;
	while (n--)
		temp[n] = s[n];
	while (temp[n])
		d[n] = temp[n];
	return (dest);
}
#include <stdio.h>
int main(void)
{
    char str[] = "macron traitrise";
    char str2[] = "macron demission";
    int test3 = 4;
    int test4 = 18;
    char test5[] = "abcdef"; // Pour overlap lib
    char test6[] = "abcdef"; // Pour overlap ft
    printf("Avant lib memmove str : %s\n", str);
    printf("Avant lib memmove int : %d\n", test3);
    printf("Avant ft memmove str : %s\n", str);
    printf("Avant ft memmove int : %d\n", test3);
    printf("Avant ft memmove overlap : %s\n", test5);

    memmove(str + 7, str2 + 7, 9);
    ft_memmove(str + 7, str2 + 7, 9);

    memmove(&test3, &test4, 4);
    ft_memmove(&test3, &test4, 4);

    memmove(test5 + 2, test5, 4); // Overlap car dest > src
    ft_memmove(test6 + 2, test6, 4);
    

    printf("Apres lib memmove str : %s\n", str);
    printf("Apres lib memmove int : %d\n", test3);
    printf("Apres ft memmove str : %s\n", str);
    printf("Apres ft memmove int : %d\n", test3);
    printf("Apres lib memmove overlap : %s\n", test5);
    printf("Apres ft memmove overlap : %s\n", test6);

    return 0;
}