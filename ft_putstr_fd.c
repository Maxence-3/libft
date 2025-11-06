/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-carv <mde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:38:25 by mde-carv          #+#    #+#             */
/*   Updated: 2025/11/06 10:29:33 by mde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

/* int main(void)
{
	char *str = "test";
	int fd = open("test.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);
	ft_putstr_fd(str, fd);
	close(fd);
} */