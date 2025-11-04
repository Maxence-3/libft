/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:18:42 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/04 18:30:22 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while (s[i] != c)
	{
		if (i-- == 0)
			return (NULL);
	}
	return ((char *) &s[i]);
}

int main(void)
{
	char *test = "coucou";
	printf("%s\n", ft_strrchr(test, 'c'));
	printf("%s", strrchr(test, 'c'));
}