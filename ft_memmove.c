/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:23:21 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/10 14:38:52 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *) dest;
	s = (char *) src;
	i = 0;
	if (d == s)
		return (dest);
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	if (d > s)
		while (n--)
			d[n] = s[n];
	return (d);
}

/* int main(void)
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
} */