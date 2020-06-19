/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bontiman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 10:41:25 by bontiman          #+#    #+#             */
/*   Updated: 2020/06/18 10:59:35 by bontiman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet()
{
	char i;

	i = 'z';
	while(i >= 'a')
	{
		ft_putchar(i);
		i--;
	}
}

int	main()
{
	ft_print_reverse_alphabet();
	return(0);
}
