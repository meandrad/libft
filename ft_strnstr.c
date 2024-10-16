/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:30:27 by meandrad          #+#    #+#             */
/*   Updated: 2024/10/15 20:38:05 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	
	i = 0;
	if (little[0] == '\0')
		return ((char *) big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while ((i + j < len) && big[i + j] == little[j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *) &big[i]);
		}
		i++;
	}
	return (NULL);
}

/* #include <stdio.h> 
int main (void)
{
	const char big[] = "You're doing great. Keep going"; 
	const char little[] = "Keep";
	char *result; 

	result = ft_strnstr(big, little, 25);

	printf("%s", result);
} */