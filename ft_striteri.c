/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:18:21 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/08 14:53:17 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/* void majuscule(unsigned int i, char *s)
{
	s[i] = s[i] - 32;
} */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		f(i, s);
		i++;
	}
}

/* int main(void)
{
	char str[10] = "test";
	ft_striteri(str, majuscule);
	printf("%s", str);
} */