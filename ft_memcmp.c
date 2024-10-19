/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 22:15:13 by meandrad          #+#    #+#             */
/*   Updated: 2024/10/18 23:02:23 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *tmp_s1;
	unsigned char *tmp_s2;
	size_t i;
	
	tmp_s1 = (unsigned char *)s1;
	tmp_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (tmp_s1[i] == tmp_s2[i] && tmp_s1[i] != '\0')
	{
		i++;
	}
	return (tmp_s1[i] - tmp_s2[i]);
}

#include <stdio.h>
int main (void)
{
	char s1[] = "teste";
	char s2[] = "teste";

	printf("%d", ft_memcmp(s1, s2, 5));

	return (0);
}