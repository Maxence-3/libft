/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:00:37 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/06 16:37:15 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_in_charset(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_char(char *s1, char *set)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s1[i])
	{
		if (ft_is_in_charset(s1[i], set))
			len++;
		i++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimed;
	char	*str;
	char	*charset;
	int		i;
	int		j;

	str = (char *) s1;
	charset = (char *) set;
	i = 0;
	j = 0;
	trimed = malloc(sizeof(char)
			* (ft_strlen(str) - ft_count_char(str, charset)));
	if (!trimed)
		return (NULL);
	while (str[i])
	{
		if (!ft_is_in_charset(str[i], charset))
		{
			trimed[j] = str[i];
			j++;
		}
		i++;
	}
	return (trimed);
}

/* int main(void)
{
	char *s1 = "test-de=ouf+!";
	char *set = "-=+";
	char *result = ft_strtrim(s1, set);
	printf("%s", result);
	free(result);
} */