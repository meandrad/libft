/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:22:35 by meandrad          #+#    #+#             */
/*   Updated: 2024/10/23 21:12:12 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	sub_len;
	char	*sub;

	s_len = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start >= s_len)
		ft_strdup("");
	if (start + len > s_len)
		sub_len = s_len - start;
	else 
		sub_len = len;
	sub = (char *)malloc((sub_len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, s + start, sub_len + 1);
	return (sub);
}
/* #include <stdio.h>
int main (void)
{
	char s[] = "Melissa Andrade"; 
	char *result;

	result = ft_substr(s, 0, 7); 
	printf("%s\n", result);
} */