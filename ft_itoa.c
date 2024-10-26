/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:51:52 by meandrad          #+#    #+#             */
/*   Updated: 2024/10/25 21:14:36 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_number(int n)
{
	long	num;
	int		i;

	i = 0;
	num  = n;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num *= -1;
		i++;
	}
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	long	num;
	int		count;

	count = count_number(n);
	s = (char *)ft_calloc(sizeof(char), (count + 1));
	if (!s)
		return (NULL);
	num = n;
	if (num < 0)
	{
		s[0] = '-';
		num *= -1;
	}
	while (count > 0)
	{
		count--;
		if (s[count] != '-')
			s[count] = (num % 10) + '0';
		num /= 10;
	}
	return (s);
}
/* #include <stdio.h>
int main (void)
{
	int i;
	char *result;
	
	i = -123;
	result = ft_itoa(i);
	printf("%s", result);
} */