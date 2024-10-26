/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:25:32 by meandrad          #+#    #+#             */
/*   Updated: 2024/10/26 15:30:05 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		string_size;
	char	*string;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	string_size = end - start;
	string = (char *)malloc((string_size + 1) * sizeof(char));
	if (!string)
		return (NULL);
	if (string_size > 0)
		ft_memcpy(string, s1 + start, string_size);
	string[string_size] = '\0';
	return (string);
}
/* #include <stdio.h>
int main (void)
{
	char *s = "abababaMelissa Andradeabababa";
	char *set = "ab";
	char *result;

	result = ft_strtrim(s, set);
	printf("%s\n", result);
	free(result);
} */