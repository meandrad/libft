/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 19:05:42 by meandrad          #+#    #+#             */
/*   Updated: 2024/10/19 17:55:08 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == (void *)0 && src == (void *)0)
		return (NULL);
	i = 0;
	if (dest != src)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/* #include <stdio.h> 
int main (void)
{
	char src[] = "teste";
	char dest[10] = "Olaaaaaa";
	char *result;
	size_t i = 10;

	result = ft_memcpy(dest, src, i);
	printf("%s", result);
}*/