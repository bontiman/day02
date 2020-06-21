/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bontiman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 11:00:48 by bontiman          #+#    #+#             */
/*   Updated: 2020/06/21 13:17:39 by bontiman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn()
{
	char a;
	char b;

	a = 0;
	while(a <= '8')
	{
		b = a + 1;
		while(b <= '9')
		{
			ft_putchar(a%10 + '0');
			ft_putchar(a/10 + '0');
			ft_putchar(b%10 + '0');
			ft_putchar(b/10 + '0');
			ft_putchar(',');
			ft_putchar(' ');
			b = b + 1;
		}
		a = a + 1;
	}
}

int	main()
{
	ft_print_combn();
	return(0);
}
