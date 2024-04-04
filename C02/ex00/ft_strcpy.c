/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumdiall <oumdiall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:43:24 by oumdiall          #+#    #+#             */
/*   Updated: 2024/03/31 15:08:50 by oumdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include<stdio.h>

// int main(void)
// {
// 	char src[] = {"hello\n"};
// 	char dest[30];

// 	ft_strcpy(dest,src);
// 	printf( "%s", dest );

// 	return(0);
// }