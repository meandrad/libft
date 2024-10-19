/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:13:12 by meandrad          #+#    #+#             */
/*   Updated: 2024/10/19 17:53:19 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp_s;
	size_t			i;

	tmp_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (tmp_s[i] == (unsigned char)c)
			return ((void *) &tmp_s[i]);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
int main (void)
{
	char s[] = "You're doing great";
	int c = 'd';
	char *result; 

	result = ft_memchr(s, c, sizeof(s));
	printf("%s", result);
	return (0);
} */