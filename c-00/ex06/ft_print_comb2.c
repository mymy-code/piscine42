/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumdiall <oumdiall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:49:22 by oumdiall          #+#    #+#             */
/*   Updated: 2024/03/20 09:54:59 by oumdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)

{
	int	i;
	int	a;

	i = 0;
	while (i <= 99)
	{
		a = i + 1;
		while (a <= 99)
		{
			ft_putchar(i / 10 + '0');
			ft_putchar(i % 10 + '0');
			write(1, " ", 1);
			ft_putchar(a / 10 + '0');
			ft_putchar(a % 10 + '0');
			if (i != 98)
			{
				write(1, ", ", 2);
			}
			a++;
		}
		i++;
	}
}

// int main ()
// {
//     ft_print_comb2();
//     return(0);
// }