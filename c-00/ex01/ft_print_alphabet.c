/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumdiall <oumdiall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:27:17 by oumdiall          #+#    #+#             */
/*   Updated: 2024/03/20 11:38:21 by oumdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	la;

	la = 'a';
	while (la <= 'z')
	{
		ft_putchar(la);
		la++;
	}
}

// int main(void)
// {
//     ft_print_alphabet('a');
//     return(0);
// }
