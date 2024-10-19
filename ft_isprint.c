/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:37:08 by meandrad          #+#    #+#             */
/*   Updated: 2024/10/19 17:52:10 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c < 32 || c > 127)
		return (0);
	else
		return (1);
}

/* #include <stdio.h>
int main (void)
{
	int i;

	i = ft_isprint('\n');
	printf("%d", i); 
	return (0);
} */