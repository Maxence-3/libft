/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:30:46 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/04 18:14:54 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		j;

	i = ft_strlen(dst);
	j = 0;
	while (src[j])
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