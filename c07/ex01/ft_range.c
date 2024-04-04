/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumdiall <oumdiall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:33:53 by oumdiall          #+#    #+#             */
/*   Updated: 2024/04/02 12:20:02 by oumdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*res;

	if (min >= max)
	{
		return (0);
	}
	i = max - min;
	res = (int *)malloc(sizeof(int) * (i));
	if (res == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (max > min)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}

// #include <stdio.h>

// int main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*tab;
// 	int	i = 0;
// 	int	size;

// 	min = 5;
// 	max = 10;
// 	size = max - min;
// 	tab = ft_range(min, max);
// 	while(i < size)
// 	{
// 		printf("%d, ", tab[i]);
// 		i++;
// 	}
// }
