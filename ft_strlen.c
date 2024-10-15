/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:17:39 by meandrad          #+#    #+#             */
/*   Updated: 2024/10/14 21:10:33 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
size_t	ft_strlen(const char *str);

size_t	ft_strlen(const char *str)
{
	int	index; 

	index = 0;
	while(str[index] != '\0')
	{
		index++;
	}
	return (index);
}

#include <stdio.h>
int main (void)
{
	char str[] = "meliss";

	printf("%zu", ft_strlen(str));
	return (0);
}