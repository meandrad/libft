/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 20:56:35 by meandrad          #+#    #+#             */
/*   Updated: 2024/10/23 22:36:47 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*store;

	store = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			store = (char *)&s[i];
		i++;
	}
	if ((char)c == '\0')
		return ((char *) &s[i]);
	return (store);
}

/* #include <stdio.h> 
int main (void)
{
	int c; 
	const char s[] = "i'm testing this test and it's called tuck";
	char *result;
	
	c = 'i';
	
	result = ft_strrchr(s, c);

	printf("%s", result);
}  */