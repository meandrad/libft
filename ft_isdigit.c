/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:08:55 by meandrad          #+#    #+#             */
/*   Updated: 2024/10/19 17:51:56 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	else
		return (1);
}

/* #include<stdio.h>
int main (void)
{
	int i;
	
	i = ft_isdigit('^');
	printf("%d", i);

	return (0);
} */
