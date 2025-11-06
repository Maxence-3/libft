/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:05:04 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/06 14:30:30 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;
	char	*big_str;
	char	*little_str;

	i = 0;
	j = 0;
	big_str = (char *)big;
	little_str = (char *)little;
	if (len - ft_strlen(little_str) == len)
		return (big_str);
	while (big_str[i])
	{
		while (big_str[i + j] == little_str[j])
		{
			j++;
			if (!little_str[j])
				return (&big_str[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}

/* int main(void)
{
	char *big = "Coucou les amis !";
	char *little = "les";
	size_t len = 17;
	printf("%s\n", ft_strnstr(big, little, len));
	printf("%s", strnstr(big, little, len));
} */