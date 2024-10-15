/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macmac <macmac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:05:46 by meandrad          #+#    #+#             */
/*   Updated: 2024/10/15 16:35:08 by macmac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 

size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	
	index = 0;
	if (dstsize <= dst_len)
		return(dstsize + src_len);
	while (src[index] != '\0' && dst_len + index < dstsize - 1)
	{
		dst[dst_len + index] = src[index];
		index++;
	}
	dst[dst_len + index] = '\0';
	return (dst_len + src_len);
	
}

/*#include <stdio.h> 
int main (void)
{
	char dst[10] = 'hello,';
	const char src[] = ' world!';
	size_t result;

	result = ft_strlcat(dst, src, 10);
	
	printf("%d", result);
}*/
