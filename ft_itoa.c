/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 11:37:42 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/08 11:43:19 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_nb(long nb)
{
	int	i;
	int	div;

	i = 1;
	div = 1;
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	while (!(nb / div <= 9 && nb / div >= 0))
	{
		i++;
		div *= 10;
	}
	return (i);
}

char	*ft_itoa(int nb)
{
	long	n;
	char	*result;
	int		i;

	n = nb;
	i = len_nb(n);
	result = malloc(sizeof(char) * (i + 1));
	if (!result)
		return (NULL);
	result[i] = '\0';
	if (n == 0)
	{
		result[0] = '0';
	}
	if (n < 0)
	{
		n *= -1;
		result[0] = '-';
	}
	while (n > 0)
	{
		result[--i] = n % 10 + '0';
		n = n / 10;
	}
	return (result);
}

/* int main(void)
{
	char *str;
	str = itoa(-2147483648);
	printf("%s", str);
	free (str);
} */