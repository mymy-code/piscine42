/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumdiall <oumdiall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 10:39:56 by oumdiall          #+#    #+#             */
/*   Updated: 2024/04/04 10:42:03 by oumdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (1 * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}

/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_sqrt(4));
}
*/