/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:32:27 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/06 15:22:58 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = s;
	while (n--)
		str[n] = '\0';
}

/* int main()
{
    char str[] = "macron demission";
    char str2[] = "macron demission";
    printf("Avant lib bzero : %s\n", str);
    printf("Avant ft bzero : %s\n", str2);

    bzero(str + 7, 1);
    ft_bzero(str2 + 7, 1);

    printf("Apres lib bzero : %s\n", str);
    printf("Apres ft bzero : %s\n", str2);

    printf("ce quil y a apres null lib bzero : %c\n", str[7]);
    printf("ce quil y a apres null ft bzero : %c\n", str2[7]);
    return 0;
} */