/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:57:23 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/06 10:29:52 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	long	num;
	char	c;

	num = n;
	i = 0;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	if (num > 9)
	{
		ft_putnbr_fd(num / 10, fd);
	}
	c = (num % 10) + '0';
	write(fd, &c, 1);
}

/* int main(void)
{
	int fd = open("test.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);
	ft_putnbr_fd(1312, fd);
	close(fd);
} */