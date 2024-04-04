/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumdiall <oumdiall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 11:10:13 by oumdiall          #+#    #+#             */
/*   Updated: 2024/03/22 10:30:15 by oumdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)

{
	*div = a / b;
	*mod = a % b;
}

// int main ()
// {
// 	int c;
// 	int d;

// 	c  =  50;
// 	d =  2;

// ft_div_mod(c, d, &c, &d);
// printf( "a =%d et b =%d", c, d);
// return(0);

// }