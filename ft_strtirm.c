/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtirm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:00:37 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/05 14:24:52 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *result;
	int i;
	int j;
	int k;

	result = malloc(sizeof(char) * (ft_strlen(s1) - ft_strlen(set)));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	while(s1[i])
	{
		while (s1[i] != set[j])
			j++;
		if (s1[i] == set[j])
			i++;
		else
		{
			result[k] = s1[i];
			i++;
			k++;
		}
		j = 0;
	}
	return (result);
}

int main(void)
{
	char *s1 = "test";
	char *set = "t";
	char *result = ft_strtrim(s1, set);
	printf("%s", result);
	free(result);
}