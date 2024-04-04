/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumdiall <oumdiall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 10:53:38 by oumdiall          #+#    #+#             */
/*   Updated: 2024/03/22 10:29:16 by oumdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include<stdio.h>
void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

// int main()
// {
// 	int c;
// 	int d;

// 	c = 10;
// 	d = 20;

// 	ft_swap(&c, &d);
// 	printf("c apres = %d et d apres = %d\n", c, d);
// 	return(0);
// }
