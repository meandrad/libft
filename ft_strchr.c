/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 20:33:51 by meandrad          #+#    #+#             */
/*   Updated: 2024/10/15 20:55:37 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	int	i; 

	i = 0;
	while (s[i] != '\0')
	{
		if(s[i] == c)
			return((char *) &s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *) &s[i]);
	return (NULL);
}

/* #include <stdio.h> 
int main (void)
{
	int c; 
	const char s[] = "You're doing";
	char *result;
	
	c = '\0';
	
	result = ft_strchr(s, c);

	printf("%s", result);
} */