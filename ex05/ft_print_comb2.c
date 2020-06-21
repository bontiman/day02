/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bontiman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:39:55 by bontiman          #+#    #+#             */
/*   Updated: 2020/06/21 08:32:01 by bontiman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2()
{
	char a;
	char b;

	a = 0;
	while(a < 99)
	{
		b = a + 1;
		while(b <= 99)
		{
			ft_putchar(a/10 + '0');
			ft_putchar(a%10 + '0');
			ft_putchar(' ');
			ft_putchar(b/10 + '0');
			ft_putchar(b%10 + '0');
			ft_putchar(',');
			ft_putchar(' ');
			b++;
		}
		a++;
	}
}

int	main()
{
	ft_print_comb2();
	ft_putchar('\n');
	return(0);
}
