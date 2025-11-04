/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:01:15 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/04 17:24:58 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (!((c > 64 && c < 91) || (c > 96 && c < 123)
			|| (c > 47 && c < 58)))
		return (0);
	else
		return (1);
}
/* int main(void)
{
	printf("%d", ft_isalnum('0'));
	printf("%c", '\n');
	printf("%d", ft_isalnum('a'));
	printf("%c", '\n');
	printf("%d", ft_isalnum('A'));
	printf("%c", '\n');
	printf("%d", ft_isalnum('\n'));
} */