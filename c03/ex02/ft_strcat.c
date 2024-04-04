/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumdiall <oumdiall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 09:30:28 by oumdiall          #+#    #+#             */
/*   Updated: 2024/03/31 12:35:56 by oumdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (ptr);
}

// #include <stdio.h>
// int main() {
//     char dest[] = "Bonjour ";
//     char source[] = "monde!";

//     printf("Chaîne après concaténation : %s\n", ft_strcat(dest, source));

//     return 0;
// }