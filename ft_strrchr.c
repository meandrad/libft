/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 20:56:35 by meandrad          #+#    #+#             */
/*   Updated: 2024/10/15 21:33:51 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
char	*ft_strrchr(const char *s, int c)
{
	int	i;
	const char	*store;
	store = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			store = &s[i];
		i++;
	}
	if (c == '\0')
		return ((char *) &s[i]);
	return ((char *) store);
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