/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:57:17 by meandrad          #+#    #+#             */
/*   Updated: 2024/10/19 17:51:12 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c < 65 || c > 90) && (c < 97 || c > 122))
		return (0);
	else
		return (1);
}

/* #include <stdio.h>
int main (void)
{
	int	i; 
	
	i = ft_isalpha('0');
	printf("%d\n", i);
	return (0);
} */