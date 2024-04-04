/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumdiall <oumdiall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:09:27 by oumdiall          #+#    #+#             */
/*   Updated: 2024/03/31 12:31:30 by oumdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main()
// {
// 	char s1[] = "hello";
// 	char s2[] = "hello";
// 	char s3[] = "olaaaali";

// 	printf( "%d", ft_strcmp(s1, s2) );
// 	printf( "%d", ft_strcmp(s1, s3) );
// 	return(0);
//   }