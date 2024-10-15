/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:16:42 by meandrad          #+#    #+#             */
/*   Updated: 2024/10/14 19:53:45 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c);

int	ft_isalnum(int c)
{
	if((c < 65 || c > 90) && (c < 97 || c > 122) && (c < 48 || c > 57))
		return (0);
	else
		return (1);
}
/* #include <stdio.h> 
int main (void)
{
	int i;

	i = ft_isalnum('P');
	printf("%d", i);
	return (0);
	
} */