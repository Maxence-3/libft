/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:25:48 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/05 13:53:11 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	int		i;

	result = malloc(sizeof(char) * (len - start));
	if (!result)
		return (NULL);
	i = 0;
	if (!result)
		return (NULL);
	while (s[start + i])
	{
		result[i] = s[start + i];
		i++;
	}
	return (result);
}

/* int main(void)
{
	char *s = "test de ouf";
	char *result = ft_substr(s, 5, ft_strlen(s));
	printf("%s", result);
	free(result);
} */