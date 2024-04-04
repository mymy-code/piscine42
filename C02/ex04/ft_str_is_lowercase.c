/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumdiall <oumdiall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 09:35:53 by oumdiall          #+#    #+#             */
/*   Updated: 2024/03/27 11:26:49 by oumdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// # include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

//  int main()
//  {
// 	char str1[] = "hello";
// 	char str2[] = "0123456789";
// 	char str3[] = "*&^%$$&";
// 	char str4[] = "AAASSGGG";

// 	printf(" str1 avant %s, apres %d \n", str1, ft_str_is_lowercase(str1));
// 	printf(" str2 avant %s, apres %d \n", str2,ft_str_is_lowercase(str2));
// 	printf(" str3 avant %s, apres %d\n", str3,ft_str_is_lowercase(str3));
// 	printf(" str3 avant %s, apres %d\n", str4, ft_str_is_lowercase(str4));

// 	return(0);

//  }
