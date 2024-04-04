/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumdiall <oumdiall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:33:55 by oumdiall          #+#    #+#             */
/*   Updated: 2024/04/02 12:19:17 by oumdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*res;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	res = malloc(sizeof(int) * (i));
	if (res == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = res;
	i = 0;
	while (max > min)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*

int main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;

	i = 0;
	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
*/