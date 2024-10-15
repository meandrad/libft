/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macmac <macmac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:26:49 by meandrad          #+#    #+#             */
/*   Updated: 2024/10/15 16:25:27 by macmac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
size_t	ft_strlen(const char *str);

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index; 
	
	index = 0;
	if (dstsize > 0)
	{
		while (src[index] != '\0' && index < (dstsize - 1))
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}
	return	(ft_strlen(src));
}

/* #include <stdio.h>
int main (void)
{
	char dest[10];
	char src[] = "teste";

	printf("%zu", ft_strlcat(dest, src, 5));

	return (0);
} */