/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:30:46 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/06 11:11:35 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	total;

	i = ft_strlen(dst);
	j = 0;
	total = size - ft_strlen(dst) - 1;
	while (src[j] && j < total)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (i);
}

/* int main(void)
{
	char dst[18] = "Coucou ";
	const char *src = "les amis !";
	char dst_2[18] = "Coucou ";
	const char *src_2 = "les amis !";
	ft_strlcat(dst, src, 18);
	strlcat(dst_2, src_2, 18);
	printf("%s\n", dst);
	printf("%s", dst_2);
} */