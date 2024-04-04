/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumdiall <oumdiall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:32:14 by oumdiall          #+#    #+#             */
/*   Updated: 2024/04/02 12:31:20 by oumdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		l;

	l = 0;
	while (src[l] != '\0')
	{
		l++;
	}
	dest = (char *)malloc(sizeof(char) * (l + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main(void)
// {
// 	char    *str;
// 	char    *new_str;

// 	str = "Pasquale Sucks";
// 	new_str = ft_strdup(str);
// 	printf("%s\n", new_str);
// }
