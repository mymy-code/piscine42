/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumdiall <oumdiall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:56:54 by oumdiall          #+#    #+#             */
/*   Updated: 2024/03/22 10:37:12 by oumdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include<stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

// int 	main(void)
// {
// 	char t[] = {"hello\n"};

// 	ft_putstr(t);

// 	return(0);
// }