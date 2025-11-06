/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 09:21:07 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/06 14:18:14 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/* int main(void)
{
	char *s1 = "test";
	char *s2 = "test";
	printf("Perso: %d\n", ft_strncmp(s1, s2, 4));
	printf("Lib: %d\n", strncmp(s1, s2, 4));
	s1 = "test";
	s2 = "best";
	printf("Perso: %d\n", ft_strncmp(s1, s2, 4));
	printf("Lib: %d\n", strncmp(s1, s2, 4));
	s1 = "best";
	s2 = "test";
	printf("Perso: %d\n", ft_strncmp(s1, s2, 4));
	printf("Lib: %d\n", strncmp(s1, s2, 4));
	s1 = "test";
	s2 = "tect";
	printf("Perso: %d\n", ft_strncmp(s1, s2, 2));
	printf("Lib: %d", strncmp(s1, s2, 2));
} */