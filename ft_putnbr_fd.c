/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:09:33 by meandrad          #+#    #+#             */
/*   Updated: 2024/10/23 22:46:46 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	list[11];
	int		i;

	i = 0;
	if (n == 0)
		write(fd, "0", 1);
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	while (n > 0)
	{
		list[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (i > 0)
		write(fd, &list[--i], 1);
}
/* #include <fcntl.h>
int main (void)
{
	int fd = open("test.txt", O_RDWR);
	ft_putnbr_fd(-2147483648, fd);
}
 */