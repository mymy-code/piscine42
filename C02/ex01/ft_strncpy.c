/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumdiall <oumdiall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:30:01 by oumdiall          #+#    #+#             */
/*   Updated: 2024/03/26 14:22:22 by oumdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int 	main(void)
// {
// 	char o[30] = {"hello\n"};
// 	char t[20] = { "tutulala"};
// 	unsigned int n;
// 	n = 2;

// 	ft_strncpy(t, o, n);
// 	printf("%s\n%s", o, t);

// 	return(0);
// }
