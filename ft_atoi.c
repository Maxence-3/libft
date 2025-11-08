/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:50:05 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/08 18:35:58 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return (result * sign);
}

/* int main(void)
{
	printf("Perso: %d\n", ft_atoi("  -355qwfcsdv"));
	printf("Lib: %d\n", atoi("  -355qwfcsdv"));
	printf("Perso: %d\n", ft_atoi("  -"));
	printf("Lib: %d\n", atoi("  -"));
	printf("Perso: %d\n", ft_atoi(" 1231231231311133"));
	printf("Lib: %d\n", atoi(" 1231231231311133"));
	printf("Perso: %d\n", ft_atoi("-999999999999"));
	printf("Lib: %d\n", atoi("-999999999999"));
	printf("Perso: %d\n", ft_atoi(" -0012gfg4"));
	printf("Lib: %d\n", atoi(" -0012gfg4"));
} */