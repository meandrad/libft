/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:44:54 by meandrad          #+#    #+#             */
/*   Updated: 2024/10/19 17:50:11 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(nptr[i]) == 1)
		i++;
	if ((nptr[i] == '+') && (nptr[i + 1] != '-'))
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (nptr[i] != '\0' && nptr[i] >= 48 && nptr[i] <= 57)
	{
		result = result * 10 + (nptr[i] - 48);
		i++;
	}
	result = result * sign;
	return (result);
}

/* #include <stdio.h>
#include <stdlib.h>
int main (void)
{
	const char *nptr;
	int result;
	int result2;
	
	nptr = "-1234";
	result = ft_atoi(nptr);
	result2 = atoi(nptr);
	
	printf("%d\n", result);
	printf("%d", result2);
} */