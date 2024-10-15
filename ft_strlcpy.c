/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:26:49 by meandrad          #+#    #+#             */
/*   Updated: 2024/10/14 22:02:37 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
size_t ft_strlcat(char *dst, const char *src, size_t size);

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index; 
	
	index = 0;
	while (src[index] != '\0' && index < (size - 1))
	{
		dst[index]  = src[index];
		index++;
	}
	dst[index] = '\0';
	return (index);
}

#include <stdio.h>
int main (void)
{
	char dest[10];
	char src[] = "teste";

	printf("%zu", ft_strlcat(dest, src, 5));

	return (0);
}