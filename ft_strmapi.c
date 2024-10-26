/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:05:50 by meandrad          #+#    #+#             */
/*   Updated: 2024/10/26 15:27:40 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	str_len;
	char			*mapped_str;

	if (!s || !f)
		return (NULL);
	str_len = ft_strlen(s);
	mapped_str = (char *)malloc((str_len + 1) * sizeof(char));
	if (!mapped_str)
		return (NULL);
	i = 0;
	while (i < str_len)
	{
		mapped_str[i] = f(i, s[i]);
		i++;
	}
	mapped_str[i] = '\0';
	return (mapped_str);
}

/* char my_toupper(unsigned int index, char c) {
    return ft_toupper(c); // Assuming ft_toupper is your implementation
}
#include <stdio.h>
int main() {
    char *input_string = "hello world";
    char *result;

    result = ft_strmapi(input_string, my_toupper);
    
    if (result) {
        printf("Original: %s\n", input_string);
        printf("Transformed: %s\n", result);
        printf("Error: could not allocate memory.\n");
    }

    return 0;
} */