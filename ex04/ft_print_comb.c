/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bontiman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 12:02:27 by bontiman          #+#    #+#             */
/*   Updated: 2020/06/20 08:22:36 by bontiman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb()
{
	char a;
	char b;
	char c;

	a = '0';
	while(a <= '7')
	{
		b = a + 1;
		while(b <= '8')
		{
			c = a + 1;
			while(c <= '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				ft_putchar(',');
				ft_putchar(' ');
				c = c + 1;
			}
			b = b + 1;
		}
		a = a + 1;
	}
}
