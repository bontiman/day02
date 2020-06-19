/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bontiman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 07:41:34 by bontiman          #+#    #+#             */
/*   Updated: 2020/06/19 07:55:42 by bontiman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int d)
{
	write(1, &d, 1);
}

void	ft_print_numbers()
{
	int i;
	
	i = '0';

	while (i <= '9')
	{
		ft_putchar(i);
		i++;
	}
}
