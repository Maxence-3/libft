/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:05:04 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/06 10:30:26 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(little) == 0)
		return (big);
	while (big[i])
	{
		while (big[i + j] == little[j])
		{
			j++;
			if (!little[j])
				return (big[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}

int main(void)
{
	
}