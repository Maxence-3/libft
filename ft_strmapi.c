/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 11:44:12 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/08 14:37:31 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char majuscule(unsigned int n, char c)
{
	(void) n;
	return (c - 32);
} */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;

	result = malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/* int main(void)
{
	char *str = "test";
	char *result = ft_strmapi(str, majuscule);
	printf("%s", result);
	free (result);
} */