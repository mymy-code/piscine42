/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumdiall <oumdiall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:49:49 by oumdiall          #+#    #+#             */
/*   Updated: 2024/03/20 11:37:29 by oumdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	la;

	la = 'z';
	while ('a' <= la)
	{
		ft_putchar(la);
		la--;
	}
}

// int main(void)
// {
//     ft_print_reverse_alphabet('a');
//     return(0);
// }
