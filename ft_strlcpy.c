/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:26:53 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/04 18:16:05 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (i > 0)
		dst[i] = '\0';
	return (i);
}
/* int main(void)
{
	char dst[18] = "Coucou ";
	const char *src = "les amis !";
	char dst_2[18] = "Coucou ";
	const char *src_2 = "les amis !";
	ft_strlcpy(dst, src, 18);
	strlcpy(dst_2, src_2, 18);
	printf("%s\n", dst);
	printf("%s", dst_2);
} */