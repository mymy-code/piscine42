/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumdiall <oumdiall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:58:33 by oumdiall          #+#    #+#             */
/*   Updated: 2024/03/30 13:22:56 by oumdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
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

// 	printf(" str1 avant %s, apres %d \n", str1, ft_str_is_alpha(str1));
// 	printf(" str2 avant %s, apres %d \n", str2, ft_str_is_alpha(str2));
// 	printf(" str3 avant %s, apres %d\n", str3, ft_str_is_alpha(str3));

// 	return(0);

//  }