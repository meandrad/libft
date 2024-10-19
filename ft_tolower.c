/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:04:27 by meandrad          #+#    #+#             */
/*   Updated: 2024/10/19 18:00:37 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c += 32);
	else
		return (c);
}

/* #include <stdio.h>
int main (void)
{
	int i;
	char c;
	
	c = 'Q';
	printf("%c\n", c);
	i = ft_tolower(c);
	printf("%c\n", i);

	return (0);
} */