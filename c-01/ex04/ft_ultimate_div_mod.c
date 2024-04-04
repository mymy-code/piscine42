/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumdiall <oumdiall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:53:42 by oumdiall          #+#    #+#             */
/*   Updated: 2024/03/22 10:35:36 by oumdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int main()
// {
// 	int c;
// 	int d;

// 	c = 50;
// 	d = 3;

// 	ft_ultimate_div_mod(&c, &d);
// 	printf("a =%d et b =%d", c, d);
// 	return (0);
// }