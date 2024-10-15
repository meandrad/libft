/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:27:11 by meandrad          #+#    #+#             */
/*   Updated: 2024/10/14 19:55:58 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c); 

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	else
		return (1);
}

#include <stdio.h> 
int main (void)
{
	int i; 
	
	i = ft_isascii(128);
	printf("%d", i);
	return (0);
}