/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:46:00 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/03 16:54:10 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_isdigit(int c)
{
	if (!(c > 47 && c < 58))
		return (0);
	else
		return (1);
}

/* int main(void)
{
	printf("%d", ft_isdigit('0'));
	printf("%c", '\n');
	printf("%d", ft_isdigit('a'));
	printf("%c", '\n');
	printf("%d", ft_isdigit('A'));
} */