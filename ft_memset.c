/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:59:55 by meandrad          #+#    #+#             */
/*   Updated: 2024/10/19 19:34:29 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp_s;
	size_t			i;

	tmp_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		tmp_s[i] = (unsigned char)c;
		i++;
	}
	return (tmp_s);
}

/* #include <stdio.h>
int main (void)
{
	char s[] = "Ola";
	int c = 'a';
	char *result;

	result = ft_memset(s, c, 3);
	
	printf("%s", result);
	return (0);
} */