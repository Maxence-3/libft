/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:03:57 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/12 02:09:31 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (s[i++] == '\0')
			return (NULL);
	}
	return ((char *) &s[i]);
}

/* int main(void)
{
	char *test = "coucou";
	printf("%s\n", strchr(test, 'c'));
	printf("%s", ft_strchr(test, 'c'));
} */